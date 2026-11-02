package org.cocos2dx.lib;

import android.content.Context;
import android.graphics.Typeface;
import java.util.Hashtable;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxTypefaces {
    private static final Hashtable<String, Typeface> cache = new Hashtable<>();

    public static Typeface get(Context context, String name) {
        Typeface typeface;
        synchronized (cache) {
            if (!cache.containsKey(name)) {
                Typeface t = Typeface.createFromAsset(context.getAssets(), name);
                cache.put(name, t);
            }
            typeface = cache.get(name);
        }
        return typeface;
    }
}
