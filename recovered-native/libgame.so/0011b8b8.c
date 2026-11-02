/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011b8b8  Symbol: init */

/* UI_Notice::init(cocos2d::CCLayer*, int, int, int) */

CCLayer * UI_Notice::init(CCLayer *param_1,int param_2,int param_3,int param_4)

{
  float in_s0;
  float in_s1;
  undefined4 in_stack_00000000;
  CCPoint local_18;
  int local_14;
  
  **(int **)(DAT_0011b91c + 0x11b8c6) = param_4;
  **(int **)(DAT_0011b920 + 0x11b8d4) = param_3;
  **(undefined4 **)(DAT_0011b928 + 0x11b8de) = in_stack_00000000;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_0011b930 + 0x11b904),(char *)(DAT_0011b934 + 0x11b908),
                   (CCNode *)param_2,local_18,local_14,2000,true,true);
  Notice_String_Draw(param_1,param_2);
  return param_1;
}


