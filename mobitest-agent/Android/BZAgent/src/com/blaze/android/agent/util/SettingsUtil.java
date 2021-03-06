package com.blaze.android.agent.util;

import java.util.Vector;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Environment;
import android.preference.PreferenceManager;
import android.provider.Settings.Secure;
import android.util.Log;

public final class SettingsUtil {
	private SettingsUtil () {}
	
	// A unique id for the device.  Used if the user does not set a unique ID
	// in the preferences.
	private static String sDeviceId = null;

	/**
	 * Returns the shared preference bundle
	 */
	private static SharedPreferences getSharedPreferences(Context context) {
		return PreferenceManager.getDefaultSharedPreferences(context);
	}

	/**
	 * Returns the delay that we should wait after finishing a run.  This defaults to 5 seconds.
	 * 
	 * @param context
	 * @return
	 */
	public static int getEndDelaySecs(Context context) {
		String delay = getSharedPreferences(context).getString("delay", "2");
		int realDelay = 2;
		if (delay != null && delay.length() > 0) {
			try {
				realDelay = Integer.valueOf(delay);
			}
			catch (NumberFormatException e) {
				Log.w("BZSettings", "Invalid preference for Delay: " + delay);
			}
		}
		return realDelay;
	}
	
	public static boolean getShouldCaptureImportant(Context context) {
		return getSharedPreferences(context).getBoolean("captureImportant", true);
	}
	
	public static boolean getShouldAutopollOnLaunch(Context context) {
		return getSharedPreferences(context).getBoolean("autopoll_on_start", false);
	}
	public static boolean getShouldRestartBetweenJobs(Context context) {
		return getSharedPreferences(context).getBoolean("restart_between_jobs", false);
	}
	
	

	/**
	 * Returns the base url to use when polling for jobs
	 * 
	 * @return
	 */
	public static Vector<String> getJobUrls(Context context) 
	{
		Vector<String> jobUrls = new Vector<String>();
		for(int i=1; i<5; i++) {
			String url = getSharedPreferences(context).getString("url" + i, "");
			if (url != null && url.length() > 0) {
				jobUrls.add(url);
			}
		}
	
		return jobUrls;
	}
	
	/**
	 * Returns the fps, 1 by default
	 * 
	 * @return
	 */
	public static int getFps(Context context) {
		String fps = getSharedPreferences(context).getString("fps", "1");
		int realFps = 1;
		if (fps != null && fps.length() > 0) {
			try {
				realFps = Integer.valueOf(fps);
			}
			catch (NumberFormatException e) {
				Log.w("BZSettings", "Invalid preference for FPS: " + fps);
			}
		}
		return realFps;
	}

	/**
	 * Returns the location name, defaults to unknown.
	 * 
	 * @return
	 */
	public static String getLocation(Context context) {
		return getSharedPreferences(context).getString("location", "unknown");
	}

	/**
	 * Returns the location key, defaults to asdf1234 which will most likely not work at all.
	 * 
	 * @return
	 */
	public static String getLocationKey(Context context) {
		return getSharedPreferences(context).getString("location_key", "asdf1234");
	}

	/**
	 * Returns the unique name, defaults to what the location is
	 * 
	 * @return
	 */
	public static String getUniqueName(Context context) {
		String uniqueName = getSharedPreferences(context).getString("unique_name",  "");
		if (uniqueName != null && uniqueName != "")
			return uniqueName;
		
		// When devices do not have unique IDs, bad things happen.  For example,
		// suppose phones A and B set ?recover=1 when getting work.  A gets a job,
		// and starts running.  B gets work, and because it has the same id as A
		// and is not done, the server will give B the same job as A.  To avoid
		// this issue when the user fails to set a preference, we return an id that
		// is unique to the phone if no ID is set.  This ID changes on OS
		// reinstall/factory reset.
		if (sDeviceId == null) {
			sDeviceId = "DeviceId_" + Secure.getString(context.getContentResolver(), Secure.ANDROID_ID);
		}
		return sDeviceId;
	}

	
	/**
	 * Returns the job timeout, defaults to 20.
	 * 
	 * @return
	 */
	public static int getTimeout(Context context) {
		String timeout = getSharedPreferences(context).getString("timeout", "120");
		if (timeout != null) {
			try {
				return Integer.valueOf(timeout);
			}
			catch (NumberFormatException e) {
				// Do nothing
			}
		}
		return 20;
	}
	
	/**
	 * Network interface value, defaults to nothing (which will capture everything, ideally)
	 * 
	 * @param context
	 * @return
	 */
	public static String getNetworkInterface(Context context) {
		return getSharedPreferences(context).getString("net_interface", "");
	}
	
	/**
	 * Priority to use for tcpdump, higher value shown to cause wifi problems, lower value may lose tcp packets
	 * 
	 * @param context
	 * @return
	 */
	public static String getTcpdumpPriority(Context context) {
		return getSharedPreferences(context).getString("tcpdump_prio", "0");
	}
	
	
	/**
	 * Returns the polling frequency in seconds.  Defaults to 5.
	 */
	public static int getPollingFrequency(Context context) {
		String pollingFrequency = getSharedPreferences(context).getString("polling_frequency", "5");
		if (pollingFrequency != null) {
			try {
				return Integer.valueOf(pollingFrequency);
			}
			catch (NumberFormatException e) {
				// Do nothing
			}
		}
		return 5;
	}
	
	public static String getJobBasePath(Context context) 
	{
		return getBasePath(context) + "blaze/";
	}

	public static String getZipPath(Context context) 
	{
		return getBasePath(context);
	}

	public static String getBasePath(Context context)
	{
		String basePath = getSharedPreferences(context).getString("base_path", null);
		
		if (basePath == null) {
		  basePath = Environment.getExternalStorageDirectory().getPath();
		}
		
		if (!basePath.endsWith("/")) {
			basePath += "/";
		}
		return basePath;
	}

	public static boolean getShouldUseExperimentalPcap2har(Context context)
	{
		return getSharedPreferences(context).getBoolean("use_experimental_pcap2har", false);
	}
	
	public static boolean getShouldProcessHarsOnServer(Context context)
	{
		return getSharedPreferences(context).getBoolean("process_hars_on_server", false);
	}

	public static int getInitialScale(Context context) {
		String prefValue = getSharedPreferences(context).getString("initial_scale_for_webView", "");
		// If the user set a pref, use it.
		if (!prefValue.equals("")) {
			try {
				return Integer.parseInt(prefValue);
			} catch (NumberFormatException ex) {
				assert false : "Android prefs system should not allow non-integer values.";
			}
		}
		
		// The preference is not set.  Choose a default based on the version
		// of Android.  Before version 4.0, a scale factor of 1% on a web view
		// (i.e. webView.setInitialScale(1)) was experimentally determined to
		// behave in the most realistic way.  Starting in Android 4.0, setting
		// the scale to 1% causes the web view to zoom out so far that the page
		// is not recognizable.  Setting the zoom to 100 was empirically shown
		// to make the page look like the real system browser on a Nexus S 4G
		// running Android 4.0

		// Ideally we could use android.os.Build.VERSION_CODES.ICE_CREAM_SANDWICH,
		// but it does not exist on older SDKs.
		final int ICE_CREAM_SANDWICH_VERSION_CODE = 14;
		if (android.os.Build.VERSION.SDK_INT < ICE_CREAM_SANDWICH_VERSION_CODE) {
			return 1;
		} else {
			return 100;
		}
	}
}
