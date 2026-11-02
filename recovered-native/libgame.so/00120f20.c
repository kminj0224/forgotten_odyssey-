/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120f20  Symbol: GameTime */

/* GameScene::GameTime(float) */

void GameScene::GameTime(float param_1)

{
  int in_r0;
  int iVar1;
  N_Draw_Number *pNVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar13;
  undefined8 uVar14;
  char acStack_3c [16];
  char acStack_2c [16];
  int local_1c;
  
  iVar7 = DAT_00121228 + 0x120f2c;
  piVar4 = *(int **)(iVar7 + DAT_0012122c);
  local_1c = *piVar4;
  if (**(int **)(iVar7 + DAT_00121230) == 0xb) {
    piVar3 = *(int **)(iVar7 + DAT_00121238);
    if (**(char **)(iVar7 + DAT_00121234) != '\0') {
      *(undefined4 *)(*piVar3 + 8) = *(undefined4 *)(*piVar3 + 0xc);
      iVar1 = (**(code **)(***(int ***)(iVar7 + DAT_0012123c) + 0xa8))();
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x28);
      param_1 = extraout_s0;
    }
    if (***(int ***)(iVar7 + DAT_00121240) != 4) {
      puVar12 = (undefined4 *)*piVar3;
      uVar10 = *puVar12;
      uVar8 = puVar12[1];
      iVar1 = __aeabi_fcmplt(param_1,uVar10,uVar8);
      if (iVar1 == 0) {
        *puVar12 = uVar8;
        param_1 = extraout_s0_00;
      }
      else {
        piVar5 = *(int **)(iVar7 + DAT_00121244);
        iVar1 = *piVar5;
        piVar6 = *(int **)(iVar7 + DAT_00121248);
        iVar9 = *piVar6;
        uVar13 = __extendsfdf2(uVar10);
        iVar11 = iVar9 * 0x6c;
        uVar14 = __floatsidf((int)*(short *)((*(char *)(iVar1 + *(char *)(iVar1 + iVar9 +
                                                                          DAT_00121250 + 4) * 0xc +
                                                                iVar11 + DAT_00121254) + 0x58) * 2 +
                                            *(int *)(iVar7 + DAT_0012124c)) +
                             (int)*(short *)((*(char *)(iVar1 + iVar11 + DAT_0012125c) + 0x2c) * 2 +
                                            *(int *)(iVar7 + DAT_00121258)) + -200);
        uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00121210,DAT_00121214);
        uVar14 = __adddf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00121218,DAT_0012121c);
        __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                 (int)((ulonglong)uVar14 >> 0x20));
        uVar8 = __truncdfsf2();
        *puVar12 = uVar8;
        iVar9 = *piVar5;
        iVar1 = *piVar6;
        iVar9 = iVar9 + *(char *)(iVar9 + iVar1 + DAT_00121250 + 4) * 0x50 + iVar1 * 0x2d0;
        param_1 = extraout_s0_01;
        if (*(int *)(*(int *)(iVar7 + DAT_00121260) + *(int *)(iVar9 + DAT_00121264) * 0x18 + 0x14)
            == 0xc) {
          puVar12 = (undefined4 *)*piVar3;
          uVar13 = __extendsfdf2(*puVar12);
          uVar14 = __floatsidf(*(undefined4 *)(iVar9 + DAT_00121268 + 4));
          uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00121210,DAT_00121214);
          __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                   (int)((ulonglong)uVar14 >> 0x20));
          uVar8 = __truncdfsf2();
          *puVar12 = uVar8;
          param_1 = extraout_s0_02;
        }
      }
    }
    puVar12 = (undefined4 *)*piVar3;
    uVar8 = puVar12[2];
    uVar10 = puVar12[3];
    iVar1 = __aeabi_fcmplt(param_1,uVar8,uVar10);
    if (iVar1 == 0) {
      puVar12[2] = uVar10;
    }
    else {
      iVar1 = **(int **)(iVar7 + DAT_00121244);
      iVar11 = **(int **)(iVar7 + DAT_00121248);
      uVar13 = __extendsfdf2(uVar8);
      iVar9 = iVar1 + iVar11 + DAT_00121250;
      uVar14 = __floatsidf((int)*(short *)((*(char *)(iVar1 + *(char *)(iVar9 + 4) * 0xc +
                                                              iVar11 * 0x6c + DAT_0012126c) + 0x6e)
                                           * 2 + *(int *)(iVar7 + DAT_0012124c)));
      uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00121210,DAT_00121214);
      uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00121220,DAT_00121224);
      __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
               (int)((ulonglong)uVar14 >> 0x20));
      uVar8 = __truncdfsf2();
      puVar12[2] = uVar8;
      iVar1 = iVar1 + *(char *)(iVar9 + 4) * 0x50 + iVar11 * 0x2d0;
      if (*(int *)(*(int *)(iVar7 + DAT_00121260) + *(int *)(iVar1 + DAT_00121264) * 0x18 + 0x14) ==
          0xb) {
        uVar13 = __extendsfdf2();
        uVar14 = __floatsidf(*(undefined4 *)(iVar1 + DAT_00121268 + 4));
        uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00121210,DAT_00121214);
        __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                 (int)((ulonglong)uVar14 >> 0x20));
        uVar8 = __truncdfsf2();
        puVar12[2] = uVar8;
      }
    }
    iVar7 = DAT_00121270;
    iVar1 = *(int *)(*(int *)(in_r0 + 0x120) + 0x118);
    uVar8 = __divsf3(*puVar12,puVar12[1]);
    *(undefined4 *)(iVar1 + 0x118) = uVar8;
    uVar8 = __fixsfsi(*puVar12);
    uVar10 = __fixsfsi(puVar12[1]);
    sprintf(acStack_3c,(char *)(iVar7 + 0x121188),uVar8,uVar10);
    pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag(*(CCNode **)(in_r0 + 0x120),0x26);
    iVar1 = __fixsfsi(*(undefined4 *)*piVar3);
    N_Draw_Number::SetNumber_Re(pNVar2,iVar1,2);
    iVar9 = *piVar3;
    iVar1 = *(int *)(*(int *)(in_r0 + 0x120) + 0x11c);
    uVar8 = __divsf3(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
    *(undefined4 *)(iVar1 + 0x118) = uVar8;
    uVar8 = __fixsfsi(*(undefined4 *)(iVar9 + 8));
    uVar10 = __fixsfsi(*(undefined4 *)(iVar9 + 0xc));
    sprintf(acStack_2c,(char *)(iVar7 + 0x121188),uVar8,uVar10);
    pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag(*(CCNode **)(in_r0 + 0x120),0x29);
    iVar7 = __fixsfsi(*(undefined4 *)(*piVar3 + 8));
    N_Draw_Number::SetNumber_Re(pNVar2,iVar7,2);
  }
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


