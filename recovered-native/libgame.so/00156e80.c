/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156e80  Symbol: gluPerspective */

/* cocos2d::gluPerspective(float, float, float, float) */

void cocos2d::gluPerspective(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  float __x;
  
  uVar1 = __mulsf3(in_r0,DAT_00156ed4);
  uVar1 = __divsf3(uVar1,DAT_00156ed8);
  tanf(__x);
  iVar2 = __mulsf3(in_r2,uVar1);
  uVar1 = __mulsf3(iVar2 + -0x80000000,in_r1);
  uVar3 = __mulsf3(iVar2,in_r1);
  glFrustumf(uVar1,uVar3,iVar2 + -0x80000000,iVar2);
  return;
}


