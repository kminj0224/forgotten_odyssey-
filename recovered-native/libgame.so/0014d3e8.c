/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d3e8  Symbol: alignItemsVerticallyWithPadding */

/* cocos2d::CCMenu::alignItemsVerticallyWithPadding(float) */

float __thiscall cocos2d::CCMenu::alignItemsVerticallyWithPadding(CCMenu *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_r1;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined8 uVar10;
  int local_30;
  CCPoint aCStack_20 [12];
  
  local_30 = in_r1 + -0x80000000;
  iVar8 = DAT_0014d53c + 0x14d400;
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), param_1 = extraout_s0, iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar6 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      piVar9 = (int *)piVar6[2];
      piVar6 = piVar9 + iVar1 + -1;
      while (piVar9 <= piVar6) {
        iVar1 = *piVar9;
        piVar9 = piVar9 + 1;
        if (iVar1 == 0) break;
        piVar4 = (int *)__dynamic_cast(iVar1,*(undefined4 *)(iVar8 + DAT_0014d540),
                                       *(undefined4 *)(iVar8 + DAT_0014d544),0);
        param_1 = extraout_s0_01;
        if (piVar4 != (int *)0x0) {
          iVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4);
          uVar2 = *(undefined4 *)(iVar1 + 4);
          uVar3 = (**(code **)(*piVar4 + 0x30))(piVar4);
          uVar2 = __mulsf3(uVar2,uVar3);
          uVar2 = __addsf3(uVar2,in_r1);
          local_30 = __addsf3(local_30,uVar2);
          param_1 = extraout_s0_00;
        }
      }
    }
  }
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), param_1 = extraout_s0_02, iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar6 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      uVar2 = __mulsf3(local_30,0x3f000000);
      piVar6 = (int *)piVar6[2];
      piVar9 = piVar6 + iVar1 + -1;
      param_1 = extraout_s0_03;
      while (piVar6 <= piVar9) {
        iVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        if (iVar1 == 0) {
          return param_1;
        }
        piVar4 = (int *)__dynamic_cast(iVar1,*(undefined4 *)(iVar8 + DAT_0014d540),
                                       *(undefined4 *)(iVar8 + DAT_0014d544),0);
        param_1 = extraout_s0_05;
        if (piVar4 != (int *)0x0) {
          pcVar7 = *(code **)(*piVar4 + 0x3c);
          iVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4);
          uVar3 = *(undefined4 *)(iVar1 + 4);
          uVar5 = (**(code **)(*piVar4 + 0x30))(piVar4);
          uVar3 = __mulsf3(uVar3,uVar5);
          uVar3 = __mulsf3(uVar3,0x3f000000);
          uVar10 = __subsf3(uVar2,uVar3);
          CCPoint::CCPoint(aCStack_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
          (*pcVar7)(piVar4,aCStack_20);
          iVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4);
          uVar3 = *(undefined4 *)(iVar1 + 4);
          uVar5 = (**(code **)(*piVar4 + 0x30))(piVar4);
          uVar3 = __mulsf3(uVar3,uVar5);
          uVar3 = __addsf3(uVar3,in_r1);
          uVar2 = __subsf3(uVar2,uVar3);
          param_1 = extraout_s0_04;
        }
      }
    }
  }
  return param_1;
}


