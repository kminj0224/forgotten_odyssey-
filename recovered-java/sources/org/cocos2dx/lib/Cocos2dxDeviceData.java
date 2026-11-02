package org.cocos2dx.lib;

import android.os.Build;
import android.support.v4.view.MotionEventCompat;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxDeviceData {
    public void Get_DeviceId() {
    }

    public void Get_DeviceType() {
        int version = Build.VERSION.SDK_INT;
        switch (version) {
            case 2:
                Log.d("VERSION", "? 1.1");
                break;
            case 3:
                Log.d("VERSION", "CUPCAKE 1.5");
                break;
            case 4:
                Log.d("VERSION", "DONUT 1.6");
                break;
            case 5:
                Log.d("VERSION", "ECLAIR 2.0");
                break;
            case 6:
                Log.d("VERSION", "ECLAIR 2.0.1");
                break;
            case 7:
                Log.d("VERSION", "ECLAIR 2.1");
                break;
            case 8:
                Log.d("VERSION", "FROYO 2.2");
                break;
            case MotionEventCompat.ACTION_HOVER_ENTER /* 9 */:
                Log.d("VERSION", "GINGERBREAD 2.3");
                break;
            case MotionEventCompat.ACTION_HOVER_EXIT /* 10 */:
                Log.d("VERSION", "GINGERBREAD 2.3.3-2.3.4");
                break;
            case 11:
                Log.d("VERSION", "HONEYCOMB 3.0");
                break;
            case 12:
                Log.d("VERSION", "HONEYCOMB 3.1");
                break;
            case 13:
                Log.d("VERSION", "HONEYCOMB 3.2");
                break;
            case 14:
                Log.d("VERSION", "ICECREAMCAKE 4.0");
                break;
        }
    }
}
