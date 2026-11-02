package org.cocos2dx.lib;

import android.content.Context;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.widget.EditText;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxEditText extends EditText {
    private Cocos2dxGLSurfaceView mView;

    public Cocos2dxEditText(Context context) {
        super(context);
    }

    public Cocos2dxEditText(Context context, AttributeSet attrs) {
        super(context, attrs);
    }

    public Cocos2dxEditText(Context context, AttributeSet attrs, int defStyle) {
        super(context, attrs, defStyle);
    }

    public void setMainView(Cocos2dxGLSurfaceView glSurfaceView) {
        this.mView = glSurfaceView;
    }

    @Override // android.widget.TextView, android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        super.onKeyDown(keyCode, event);
        if (keyCode == 4) {
            this.mView.requestFocus();
            return true;
        }
        return true;
    }
}
