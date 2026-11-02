/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137990  Symbol: initWithDuration */

/* cocos2d::CCOrbitCamera::initWithDuration(float, float, float, float, float, float, float) */

int cocos2d::CCOrbitCamera::initWithDuration
              (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
              float param_7)

{
  CCActionInterval *in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  iVar1 = CCActionInterval::initWithDuration(in_r0,param_1);
  uVar3 = DAT_001379cc;
  if (iVar1 != 0) {
    *(undefined4 *)(in_r0 + 0x50) = in_r2;
    *(undefined4 *)(in_r0 + 0x58) = in_stack_00000000;
    *(undefined4 *)(in_r0 + 0x54) = in_r3;
    *(undefined4 *)(in_r0 + 0x5c) = in_stack_00000004;
    *(undefined4 *)(in_r0 + 0x60) = in_stack_00000008;
    *(undefined4 *)(in_r0 + 100) = in_stack_0000000c;
    uVar2 = __mulsf3(in_stack_00000004,uVar3);
    uVar3 = DAT_001379cc;
    *(undefined4 *)(in_r0 + 0x6c) = uVar2;
    uVar3 = __mulsf3(in_stack_0000000c,uVar3);
    *(undefined4 *)(in_r0 + 0x74) = uVar3;
    iVar1 = 1;
  }
  return iVar1;
}


