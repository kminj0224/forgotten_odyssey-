package android.support.v4.view;

import android.animation.ValueAnimator;

/* JADX INFO: loaded from: classes.dex */
class ViewCompatHC {
    ViewCompatHC() {
    }

    static long getFrameTime() {
        return ValueAnimator.getFrameDelay();
    }
}
