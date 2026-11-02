/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d558  Symbol: alignItemsHorizontallyWithPadding */

/* cocos2d::CCMenu::alignItemsHorizontallyWithPadding(float) */

float __thiscall cocos2d::CCMenu::alignItemsHorizontallyWithPadding(CCMenu *this,float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_r1;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined8 uVar11;
  int local_30;
  CCPoint aCStack_20 [12];
  
  local_30 = in_r1 + -0x80000000;
  iVar9 = DAT_0014d6b0 + 0x14d570;
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), param_1 = extraout_s0, iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar7 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      piVar10 = (int *)piVar7[2];
      piVar7 = piVar10 + iVar1 + -1;
      while (piVar10 <= piVar7) {
        iVar1 = *piVar10;
        piVar10 = piVar10 + 1;
        if (iVar1 == 0) break;
        piVar5 = (int *)__dynamic_cast(iVar1,*(undefined4 *)(iVar9 + DAT_0014d6b4),
                                       *(undefined4 *)(iVar9 + DAT_0014d6b8),0);
        param_1 = extraout_s0_01;
        if (piVar5 != (int *)0x0) {
          puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
          uVar3 = *puVar2;
          uVar4 = (**(code **)(*piVar5 + 0x28))(piVar5);
          uVar3 = __mulsf3(uVar3,uVar4);
          uVar3 = __addsf3(uVar3,in_r1);
          local_30 = __addsf3(local_30,uVar3);
          param_1 = extraout_s0_00;
        }
      }
    }
  }
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), param_1 = extraout_s0_02, iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar7 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      uVar3 = __mulsf3(local_30 + -0x80000000,0x3f000000);
      piVar7 = (int *)piVar7[2];
      piVar10 = piVar7 + iVar1 + -1;
      param_1 = extraout_s0_03;
      while (piVar7 <= piVar10) {
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        if (iVar1 == 0) {
          return param_1;
        }
        piVar5 = (int *)__dynamic_cast(iVar1,*(undefined4 *)(iVar9 + DAT_0014d6b4),
                                       *(undefined4 *)(iVar9 + DAT_0014d6b8),0);
        param_1 = extraout_s0_05;
        if (piVar5 != (int *)0x0) {
          pcVar8 = *(code **)(*piVar5 + 0x3c);
          puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
          uVar4 = *puVar2;
          uVar6 = (**(code **)(*piVar5 + 0x28))(piVar5);
          uVar4 = __mulsf3(uVar4,uVar6);
          uVar4 = __mulsf3(uVar4,0x3f000000);
          uVar11 = __addsf3(uVar3,uVar4);
          CCPoint::CCPoint(aCStack_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar5,aCStack_20);
          puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
          uVar4 = *puVar2;
          uVar6 = (**(code **)(*piVar5 + 0x28))(piVar5);
          uVar4 = __mulsf3(uVar4,uVar6);
          uVar4 = __addsf3(uVar4,in_r1);
          uVar3 = __addsf3(uVar3,uVar4);
          param_1 = extraout_s0_04;
        }
      }
    }
  }
  return param_1;
}


