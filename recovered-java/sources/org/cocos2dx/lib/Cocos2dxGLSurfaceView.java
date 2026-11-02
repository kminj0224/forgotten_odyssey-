package org.cocos2dx.lib;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.os.Handler;
import android.os.Message;
import android.support.v4.view.MotionEventCompat;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.inputmethod.InputMethodManager;
import android.widget.TextView;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxGLSurfaceView extends GLSurfaceView {
    private static final int HANDLER_CLOSE_IME_KEYBOARD = 3;
    private static final int HANDLER_OPEN_IME_KEYBOARD = 2;
    private static final String TAG = Cocos2dxGLSurfaceView.class.getCanonicalName();
    private static final boolean debug = false;
    private static Handler handler;
    private static Cocos2dxGLSurfaceView mainView;
    private static TextInputWraper textInputWraper;
    private Cocos2dxRenderer mRenderer;
    private Cocos2dxEditText mTextField;

    public Cocos2dxGLSurfaceView(Context context) {
        super(context);
        initView();
    }

    public Cocos2dxGLSurfaceView(Context context, AttributeSet attrs) {
        super(context, attrs);
        initView();
    }

    protected void initView() {
        this.mRenderer = new Cocos2dxRenderer();
        setFocusableInTouchMode(true);
        setRenderer(this.mRenderer);
        textInputWraper = new TextInputWraper(this);
        handler = new Handler() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.1
            @Override // android.os.Handler
            public void handleMessage(Message msg) {
                switch (msg.what) {
                    case 2:
                        if (Cocos2dxGLSurfaceView.this.mTextField != null && Cocos2dxGLSurfaceView.this.mTextField.requestFocus()) {
                            Cocos2dxGLSurfaceView.this.mTextField.removeTextChangedListener(Cocos2dxGLSurfaceView.textInputWraper);
                            Cocos2dxGLSurfaceView.this.mTextField.setText("");
                            String text = (String) msg.obj;
                            Cocos2dxGLSurfaceView.this.mTextField.append(text);
                            Cocos2dxGLSurfaceView.textInputWraper.setOriginText(text);
                            Cocos2dxGLSurfaceView.this.mTextField.addTextChangedListener(Cocos2dxGLSurfaceView.textInputWraper);
                            InputMethodManager imm = (InputMethodManager) Cocos2dxGLSurfaceView.mainView.getContext().getSystemService("input_method");
                            imm.showSoftInput(Cocos2dxGLSurfaceView.this.mTextField, 0);
                            Log.d("GLSurfaceView", "showSoftInput");
                            break;
                        }
                        break;
                    case 3:
                        if (Cocos2dxGLSurfaceView.this.mTextField != null) {
                            Cocos2dxGLSurfaceView.this.mTextField.removeTextChangedListener(Cocos2dxGLSurfaceView.textInputWraper);
                            InputMethodManager imm2 = (InputMethodManager) Cocos2dxGLSurfaceView.mainView.getContext().getSystemService("input_method");
                            imm2.hideSoftInputFromWindow(Cocos2dxGLSurfaceView.this.mTextField.getWindowToken(), 0);
                            Log.d("GLSurfaceView", "HideSoftInput");
                        }
                        break;
                }
            }
        };
        mainView = this;
    }

    @Override // android.opengl.GLSurfaceView
    public void onPause() {
        queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.2
            @Override // java.lang.Runnable
            public void run() {
                Cocos2dxGLSurfaceView.this.mRenderer.handleOnPause();
            }
        });
        super.onPause();
    }

    @Override // android.opengl.GLSurfaceView
    public void onResume() {
        super.onResume();
        queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.3
            @Override // java.lang.Runnable
            public void run() {
                Cocos2dxGLSurfaceView.this.mRenderer.handleOnResume();
            }
        });
    }

    public TextView getTextField() {
        return this.mTextField;
    }

    public void setTextField(Cocos2dxEditText view) {
        this.mTextField = view;
        if (this.mTextField != null && textInputWraper != null) {
            this.mTextField.setOnEditorActionListener(textInputWraper);
            this.mTextField.setMainView(this);
            requestFocus();
        }
    }

    public static void openIMEKeyboard() {
        Message msg = new Message();
        msg.what = 2;
        msg.obj = mainView.getContentText();
        handler.sendMessage(msg);
    }

    private String getContentText() {
        return this.mRenderer.getContentText();
    }

    public static void closeIMEKeyboard() {
        Message msg = new Message();
        msg.what = 3;
        handler.sendMessage(msg);
    }

    public void insertText(final String text) {
        queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.4
            @Override // java.lang.Runnable
            public void run() {
                Cocos2dxGLSurfaceView.this.mRenderer.handleInsertText(text);
            }
        });
    }

    public void deleteBackward() {
        queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.5
            @Override // java.lang.Runnable
            public void run() {
                Cocos2dxGLSurfaceView.this.mRenderer.handleDeleteBackward();
            }
        });
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent event) {
        int pointerNumber = event.getPointerCount();
        final int[] ids = new int[pointerNumber];
        final float[] xs = new float[pointerNumber];
        final float[] ys = new float[pointerNumber];
        for (int i = 0; i < pointerNumber; i++) {
            ids[i] = event.getPointerId(i);
            xs[i] = event.getX(i);
            ys[i] = event.getY(i);
        }
        switch (event.getAction() & MotionEventCompat.ACTION_MASK) {
            case 0:
                final int idDown = event.getPointerId(0);
                final float xDown = xs[0];
                final float yDown = ys[0];
                queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.7
                    @Override // java.lang.Runnable
                    public void run() {
                        Cocos2dxGLSurfaceView.this.mRenderer.handleActionDown(idDown, xDown, yDown);
                    }
                });
                break;
            case 1:
                final int idUp = event.getPointerId(0);
                final float xUp = xs[0];
                final float yUp = ys[0];
                queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.10
                    @Override // java.lang.Runnable
                    public void run() {
                        Cocos2dxGLSurfaceView.this.mRenderer.handleActionUp(idUp, xUp, yUp);
                    }
                });
                break;
            case 2:
                queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.8
                    @Override // java.lang.Runnable
                    public void run() {
                        Cocos2dxGLSurfaceView.this.mRenderer.handleActionMove(ids, xs, ys);
                    }
                });
                break;
            case 3:
                queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.11
                    @Override // java.lang.Runnable
                    public void run() {
                        Cocos2dxGLSurfaceView.this.mRenderer.handleActionCancel(ids, xs, ys);
                    }
                });
                break;
            case 5:
                int indexPointerDown = event.getAction() >> 8;
                final int idPointerDown = event.getPointerId(indexPointerDown);
                final float xPointerDown = event.getX(indexPointerDown);
                final float yPointerDown = event.getY(indexPointerDown);
                queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.6
                    @Override // java.lang.Runnable
                    public void run() {
                        Cocos2dxGLSurfaceView.this.mRenderer.handleActionDown(idPointerDown, xPointerDown, yPointerDown);
                    }
                });
                break;
            case 6:
                int indexPointUp = event.getAction() >> 8;
                final int idPointerUp = event.getPointerId(indexPointUp);
                final float xPointerUp = event.getX(indexPointUp);
                final float yPointerUp = event.getY(indexPointUp);
                queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.9
                    @Override // java.lang.Runnable
                    public void run() {
                        Cocos2dxGLSurfaceView.this.mRenderer.handleActionUp(idPointerUp, xPointerUp, yPointerUp);
                    }
                });
                break;
        }
        return true;
    }

    @Override // android.view.View
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        this.mRenderer.setScreenWidthAndHeight(w, h);
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(final int keyCode, KeyEvent event) {
        if (keyCode != 4 && keyCode != 82) {
            return super.onKeyDown(keyCode, event);
        }
        queueEvent(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxGLSurfaceView.12
            @Override // java.lang.Runnable
            public void run() {
                Cocos2dxGLSurfaceView.this.mRenderer.handleKeyDown(keyCode);
            }
        });
        return true;
    }

    private void dumpEvent(MotionEvent event) {
        String[] names = {"DOWN", "UP", "MOVE", "CANCEL", "OUTSIDE", "POINTER_DOWN", "POINTER_UP", "7?", "8?", "9?"};
        StringBuilder sb = new StringBuilder();
        int action = event.getAction();
        int actionCode = action & MotionEventCompat.ACTION_MASK;
        sb.append("event ACTION_").append(names[actionCode]);
        if (actionCode == 5 || actionCode == 6) {
            sb.append("(pid ").append(action >> 8);
            sb.append(")");
        }
        sb.append("[");
        for (int i = 0; i < event.getPointerCount(); i++) {
            sb.append("#").append(i);
            sb.append("(pid ").append(event.getPointerId(i));
            sb.append(")=").append((int) event.getX(i));
            sb.append(",").append((int) event.getY(i));
            if (i + 1 < event.getPointerCount()) {
                sb.append(";");
            }
        }
        sb.append("]");
        Log.d(TAG, sb.toString());
    }
}
