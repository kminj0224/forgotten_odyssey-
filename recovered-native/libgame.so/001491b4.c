/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001491b4  Symbol: initWithColorWidthHeight */

/* cocos2d::CCLayerColor::initWithColorWidthHeight(cocos2d::_ccColor4B const&, float, float) */

undefined4
cocos2d::CCLayerColor::initWithColorWidthHeight(_ccColor4B *param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  _ccColor4B *in_r1;
  code *pcVar2;
  undefined8 uVar3;
  CCSize aCStack_20 [12];
  
  uVar1 = DAT_00149220;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  param_1[DAT_00149224] = *in_r1;
  param_1[0x14a] = in_r1[1];
  param_1[DAT_00149228] = in_r1[2];
  param_1[0x148] = in_r1[3];
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  uVar3 = (**(code **)(*(int *)param_1 + 0x150))(param_1);
  pcVar2 = *(code **)(*(int *)param_1 + 0x80);
  CCSize::CCSize(aCStack_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar2)(param_1,aCStack_20);
  return 1;
}


