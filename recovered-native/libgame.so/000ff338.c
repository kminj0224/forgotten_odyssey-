/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ff338  Symbol: Init_animation */

/* Image_Fram::Init_animation(char const*, char const*, bool, int) */

void __thiscall
Image_Fram::Init_animation(Image_Fram *this,char *param_1,char *param_2,bool param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar10;
  float extraout_s1;
  undefined4 local_50;
  undefined4 local_4c;
  CCPoint local_48;
  int local_44;
  CCPoint aCStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [28];
  
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  cocos2d::CCDirector::sharedDirector();
  uVar10 = cocos2d::CCDirector::getWinSize();
  *(undefined4 *)(this + 0x110) = local_50;
  *(undefined4 *)(this + 0x114) = local_4c;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar1 = (int *)vDrawScript_Unit_Rend(param_1,param_2,(CCNode *)this,local_48,local_44,0);
  *(int **)(this + 0x11c) = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0xa8))();
  *(undefined4 *)(this + 0x394) = *(undefined4 *)(iVar2 + 8);
  iVar2 = (**(code **)(**(int **)(this + 0x11c) + 0xa8))();
  *(undefined4 *)(this + 0x398) = *(undefined4 *)(iVar2 + 0xc);
  piVar1 = *(int **)(this + 0x11c);
  pcVar8 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
  (*pcVar8)(piVar1,aCStack_40);
  piVar9 = *(int **)(this + 0x11c);
  piVar1 = (int *)(**(code **)(*piVar9 + 0xa8))(piVar9);
  ani_ani_test_speed((CCSprite *)piVar9,*(_KG_Anit **)(param_4 * 4 + *piVar1),extraout_s0_00);
  ppiVar3 = (int **)(**(code **)(**(int **)(this + 0x11c) + 0xa8))();
  __floatsisf(*(undefined4 *)(**ppiVar3 + 0x284));
  ppiVar3 = (int **)(**(code **)(**(int **)(this + 0x11c) + 0xa8))();
  uVar10 = __floatsisf(*(undefined4 *)(**ppiVar3 + 0x280));
  cocos2d::CCSize::CCSize((CCSize *)&local_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  *(undefined4 *)(this + 0x128) = local_38;
  *(undefined4 *)(this + 300) = local_34;
  iVar2 = (**(code **)(**(int **)(this + 0x11c) + 0xa8))();
  uVar4 = __addsf3(*(undefined4 *)(this + 0x128),DAT_000ff590);
  __addsf3(*(undefined4 *)(this + 300),DAT_000ff590);
  uVar5 = __fixsfsi();
  __fixsfsi(uVar4);
  uVar6 = __floatsisf();
  iVar7 = __aeabi_fcmpgt(uVar6,0x43000000);
  if (iVar7 != 0) {
    uVar4 = __divsf3(0x43000000,uVar4);
    iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar2 + 0x1c),uVar4);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = uVar4;
    }
  }
  uVar4 = __floatsisf(uVar5);
  iVar7 = __aeabi_fcmpgt(uVar4,0x43000000);
  if (iVar7 != 0) {
    uVar4 = __addsf3(*(undefined4 *)(this + 300),DAT_000ff590);
    uVar4 = __divsf3(0x43000000,uVar4);
    iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar2 + 0x1c),uVar4);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = uVar4;
    }
  }
  (**(code **)(**(int **)(this + 0x11c) + 0x2c))
            (*(int **)(this + 0x11c),*(undefined4 *)(iVar2 + 0x1c));
  (**(code **)(**(int **)(this + 0x11c) + 0x34))
            (*(int **)(this + 0x11c),*(int *)(iVar2 + 0x1c) + -0x80000000);
  pcVar8 = *(code **)(**(int **)(this + 0x11c) + 0x3c);
  ppiVar3 = (int **)(**(code **)(**(int **)(this + 0x11c) + 0xa8))();
  uVar4 = __floatsisf(*(int *)(**ppiVar3 + 0x284) + 0xf);
  __mulsf3(uVar4,*(undefined4 *)(iVar2 + 0x1c));
  piVar1 = *(int **)(this + 0x11c);
  ppiVar3 = (int **)(**(code **)(*piVar1 + 0xa8))(piVar1);
  uVar4 = __floatsisf(*(int *)(**ppiVar3 + 0x280) + 0xf);
  uVar10 = __mulsf3(uVar4,*(undefined4 *)(iVar2 + 0x1c));
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar8)(piVar1,aCStack_30);
  piVar1 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)piVar1);
  *piVar1 = *(int *)(DAT_000ff594 + 0xff54a) + 8;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  *(int **)(this + 0x390) = piVar1;
  uVar4 = __floatsisf(*(undefined4 *)(this + 0x394));
  uVar4 = __addsf3(*(undefined4 *)(this + 0x128),uVar4);
  *(undefined4 *)(this + 0x128) = uVar4;
  cocos2d::CCNode::schedule((CCNode *)this,(_func_void_float *)0x10,extraout_s0_01);
  return;
}


