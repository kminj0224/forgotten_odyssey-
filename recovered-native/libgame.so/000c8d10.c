/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8d10  Symbol: onEnter */

/* Draw_Number::onEnter() */

undefined8 Draw_Number::onEnter(void)

{
  int *in_r0;
  undefined4 in_r1;
  code *pcVar1;
  undefined8 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = in_r0;
  uStack_14 = in_r1;
  uVar2 = cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  in_r0[0x45] = 0;
  pcVar1 = *(code **)(*in_r0 + 0x80);
  cocos2d::CCSize::CCSize((CCSize *)&piStack_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  (*pcVar1)(in_r0,&piStack_18);
  return CONCAT44(uStack_14,piStack_18);
}


