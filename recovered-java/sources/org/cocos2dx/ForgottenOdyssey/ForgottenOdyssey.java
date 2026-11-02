package org.cocos2dx.ForgottenOdyssey;

import android.os.Bundle;
import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxEditText;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;

/* JADX INFO: loaded from: classes.dex */
public class ForgottenOdyssey extends Cocos2dxActivity {
    private Cocos2dxGLSurfaceView mGLView;

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        String packageName = getApplication().getPackageName();
        super.setPackageName(packageName);
        setContentView(R.layout.game_demo);
        this.mGLView = (Cocos2dxGLSurfaceView) findViewById(R.id.game_gl_surfaceview);
        this.mGLView.setTextField((Cocos2dxEditText) findViewById(R.id.textField));
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onPause() {
        super.onPause();
        this.mGLView.onPause();
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onResume() {
        super.onResume();
        this.mGLView.onResume();
    }

    static {
        System.loadLibrary("cocosdenshion");
        System.loadLibrary("gamedaylib");
        System.loadLibrary("game");
    }
}
