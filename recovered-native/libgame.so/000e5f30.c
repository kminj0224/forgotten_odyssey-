/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5f30  Symbol: UI_Number_Loding */

/* Market_Unit::UI_Number_Loding() */

void Market_Unit::UI_Number_Loding(void)

{
  int iVar1;
  int *in_r0;
  int *this;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  float in_s0;
  float fVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float in_s1;
  undefined8 uVar6;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined4 uVar7;
  int local_a8;
  CCPoint aCStack_a0 [8];
  CCSize aCStack_98 [2];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_60,in_s0,in_s1);
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  iVar1 = DAT_000e61c0;
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  piVar3 = *(int **)(iVar1 + 0xe5f8c);
  local_a8 = 0;
  do {
    piVar4 = *(int **)(DAT_000e61c8 + 0xe5fa4);
    if (*(char *)(*piVar3 + *piVar4 * 9 + local_a8 + DAT_000e61cc) != '\0') {
      this = (int *)N_Draw_Number::node();
      uVar6 = (**(code **)(*this + 0x3c))(this,aCStack_60 + local_a8 * 8);
      pcVar2 = *(code **)(*this + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      (*pcVar2)(this,aCStack_a0);
      (**(code **)(*in_r0 + 0xcc))(in_r0,this,local_a8 + 0xc);
      N_Draw_Number::SetNumberFont((N_Draw_Number *)this,0);
      uVar6 = N_Draw_Number::SetNumber
                        ((N_Draw_Number *)this,
                         *(int *)(*piVar3 + (*piVar4 * 9 + local_a8 + DAT_000e61d0) * 4 + 4),2);
    }
    local_a8 = local_a8 + 1;
  } while (local_a8 != 9);
  fVar5 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_98,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar7 = DAT_000e61dc;
  piVar3 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_000e61e0 + 0xe6044),aCStack_98,1,
                             (char *)(DAT_000e61e4 + 0xe6040),fVar5);
  in_r0[0x49] = (int)piVar3;
  pcVar2 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_90,extraout_s0,extraout_s1);
  (*pcVar2)(piVar3,aCStack_90);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x49],4,4,uVar7);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x44] = (int)piVar3;
  pcVar2 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_88,extraout_s0_00,extraout_s1_00);
  (*pcVar2)(piVar3,aCStack_88);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x44],9,9);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x44],1);
  N_Draw_Number::SetMoney((N_Draw_Number *)in_r0[0x44],0,0);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x45] = (int)piVar3;
  pcVar2 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_80,extraout_s0_01,extraout_s1_01);
  (*pcVar2)(piVar3,aCStack_80);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x45],3,3);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x45],0);
  N_Draw_Number::SetNumber((N_Draw_Number *)in_r0[0x45],0,2);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x46] = (int)piVar3;
  pcVar2 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_78,extraout_s0_02,extraout_s1_02);
  (*pcVar2)(piVar3,aCStack_78);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x46],3,3);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x46],5);
  N_Draw_Number::SetNumber((N_Draw_Number *)in_r0[0x46],0,2);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x47] = (int)piVar3;
  pcVar2 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_70,extraout_s0_03,extraout_s1_03);
  (*pcVar2)(piVar3,aCStack_70);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x47],3,3);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x47],0);
  N_Draw_Number::SetNumber((N_Draw_Number *)in_r0[0x47],0,2);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x48] = (int)piVar3;
  pcVar2 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_68,extraout_s0_04,extraout_s1_04);
  (*pcVar2)(piVar3,aCStack_68);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x48],3,3);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x48],5);
  N_Draw_Number::SetNumber((N_Draw_Number *)in_r0[0x48],0,2);
  return;
}


