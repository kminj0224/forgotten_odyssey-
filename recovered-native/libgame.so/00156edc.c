/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156edc  Symbol: gluLookAt */

/* cocos2d::gluLookAt(float, float, float, float, float, float, float, float, float) */

void cocos2d::gluLookAt(float param_1,float param_2,float param_3,float param_4,float param_5,
                       float param_6,float param_7,float param_8,float param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int in_r1;
  int in_r2;
  undefined4 in_r3;
  float __x;
  float __x_00;
  float __x_01;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_98 [16];
  undefined4 local_58 [17];
  
  iVar1 = __subsf3(param_9,in_r3);
  uVar2 = __subsf3(in_r1,in_stack_00000000);
  uVar3 = __subsf3(in_r2,in_stack_00000004);
  uVar4 = __mulsf3(iVar1,iVar1);
  uVar5 = __mulsf3(uVar2,uVar2);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __mulsf3(uVar3,uVar3);
  uVar4 = __addsf3(uVar4,uVar5);
  sqrtf(__x);
  iVar6 = __aeabi_fcmpeq();
  if (iVar6 == 0) {
    iVar1 = __divsf3(iVar1,uVar4);
    uVar2 = __divsf3(uVar2,uVar4);
    uVar3 = __divsf3(uVar3,uVar4);
  }
  uVar4 = __mulsf3(in_stack_0000000c,uVar3);
  uVar5 = __mulsf3(in_stack_00000010,uVar2);
  iVar6 = __subsf3(uVar4,uVar5);
  uVar4 = __mulsf3(in_stack_00000008 + -0x80000000,uVar3);
  uVar5 = __mulsf3(in_stack_00000010,iVar1);
  local_b4 = __addsf3(uVar4,uVar5);
  uVar4 = __mulsf3(in_stack_00000008,uVar2);
  uVar5 = __mulsf3(in_stack_0000000c,iVar1);
  local_b8 = __subsf3(uVar4,uVar5);
  uVar4 = __mulsf3(uVar2,local_b8);
  uVar5 = __mulsf3(uVar3,local_b4);
  local_b0 = __subsf3(uVar4,uVar5);
  uVar4 = __mulsf3(iVar1 + -0x80000000,local_b8);
  uVar5 = __mulsf3(uVar3,iVar6);
  local_ac = __addsf3(uVar4,uVar5);
  uVar4 = __mulsf3(iVar1,local_b4);
  uVar5 = __mulsf3(uVar2,iVar6);
  local_a8 = __subsf3(uVar4,uVar5);
  uVar4 = __mulsf3(iVar6,iVar6);
  uVar5 = __mulsf3(local_b4,local_b4);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __mulsf3(local_b8,local_b8);
  uVar4 = __addsf3(uVar4,uVar5);
  sqrtf(__x_00);
  iVar7 = __aeabi_fcmpeq();
  if (iVar7 == 0) {
    iVar6 = __divsf3(iVar6,uVar4);
    local_b4 = __divsf3(local_b4,uVar4);
    local_b8 = __divsf3(local_b8,uVar4);
  }
  uVar4 = __mulsf3(local_b0,local_b0);
  uVar5 = __mulsf3(local_ac,local_ac);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __mulsf3(local_a8,local_a8);
  uVar4 = __addsf3(uVar4,uVar5);
  sqrtf(__x_01);
  iVar7 = __aeabi_fcmpeq();
  if (iVar7 == 0) {
    local_b0 = __divsf3(local_b0,uVar4);
    local_ac = __divsf3(local_ac,uVar4);
    local_a8 = __divsf3(local_a8,uVar4);
  }
  local_98[4] = local_b4;
  local_98[8] = local_b8;
  local_98[1] = local_b0;
  local_98[12] = 0;
  local_98[13] = 0;
  local_98[14] = 0;
  local_98[3] = 0;
  local_98[7] = 0;
  local_98[11] = 0;
  local_98[15] = 0x3f800000;
  local_98[0] = iVar6;
  local_98[5] = local_ac;
  local_98[9] = local_a8;
  local_98[2] = iVar1;
  local_98[6] = uVar2;
  local_98[10] = uVar3;
  iVar1 = 0;
  do {
    *(undefined4 *)((int)local_58 + iVar1) = *(undefined4 *)((int)local_98 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x40);
  glMultMatrixf();
  glTranslatef((int)param_9 + -0x80000000,in_r1 + -0x80000000,in_r2 + -0x80000000);
  return;
}


