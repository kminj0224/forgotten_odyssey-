/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dd7ca  Symbol: FUN_000dd7ca */

void FUN_000dd7ca(float param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int *unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  bool bVar11;
  bool bVar12;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  undefined8 uVar14;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  code *param_7;
  int param_8;
  int param_9;
  int param_10;
  int *param_11;
  int param_12;
  int param_13;
  int *in_stack_00000028;
  undefined param_17;
  undefined param_18;
  undefined param_23;
  undefined param_24;
  int in_stack_000003a4;
  
  iVar7 = *(int *)(param_12 + 0x1c);
  if (iVar7 == 9) {
    unaff_r7 = unaff_r7 + 0xb;
  }
  else if (iVar7 == 0xb) {
    unaff_r7 = unaff_r7 + 0x16;
  }
  else if (iVar7 == 10) {
    unaff_r7 = unaff_r7 + 0x21;
  }
  else if (iVar7 == 0xc) {
    unaff_r7 = unaff_r7 + 0x2c;
  }
  param_8 = unaff_r7 + param_13;
  param_7 = (code *)(DAT_000ddbd0 + 0xdd856);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(param_8 * 4 + *(int *)(param_10 + DAT_000ddbcc)),
                             (char *)param_7,param_1);
  param_17 = 0xc1;
  param_18 = 0;
  uVar14 = (**(code **)(*piVar1 + 0xf4))();
  pcVar10 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x000001d4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar10)(piVar1,&stack0x000001d4);
  pcVar10 = *(code **)(*piVar1 + 0x3c);
  iVar7 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
  uVar14 = __subsf3(*(undefined4 *)(iVar7 + 4),DAT_000ddbd8);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x000001dc,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar10)(piVar1,&stack0x000001dc);
  (**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar1);
  sprintf(&stack0x00000264,(char *)(DAT_000ddbe0 + 0xdd8ea),
          (int)*(char *)(*unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc + *param_11 +
                         (int)*(char *)(param_9 + DAT_000ddbdc) + DAT_000ddbe4));
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString(&stack0x00000264,(char *)param_7,extraout_s0)
  ;
  pcVar10 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000001e4,extraout_s0_00,extraout_s1);
  (*pcVar10)(piVar2,&stack0x000001e4);
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar4 = __addsf3(*puVar3,DAT_000ddbd8);
  __addsf3(uVar4,DAT_000ddbe8);
  iVar7 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
  uVar14 = __subsf3(*(undefined4 *)(iVar7 + 4),DAT_000ddbd8);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x000001ec,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar10)(piVar2,&stack0x000001ec);
  fVar13 = (float)(**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar2);
  iVar8 = *(int *)(param_10 + DAT_000ddbec);
  iVar9 = iVar8 + param_8 * 0x10;
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString(*(char **)(iVar9 + 8),(char *)param_7,fVar13)
  ;
  pcVar10 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000001f4,extraout_s0_01,extraout_s1_00);
  (*pcVar10)(piVar1,&stack0x000001f4);
  param_7 = *(code **)(*piVar1 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
  __subsf3(*puVar3,DAT_000ddbd8);
  iVar7 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
  uVar14 = __subsf3(*(undefined4 *)(iVar7 + 4),DAT_000ddbd8);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x000001fc,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*param_7)(piVar1,&stack0x000001fc);
  (**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar1);
  iVar7 = *(int *)(param_10 + DAT_000ddbf0);
  iVar6 = *(int *)(param_10 + DAT_000ddbf4);
  if (*(char *)(iVar7 + param_8) == '\0') {
    param_7 = (code *)(*(char *)(param_9 + DAT_000ddbf8) + param_13);
    bVar11 = (int)param_7 - 4U < 2;
    bVar12 = param_7 == (code *)0x7;
    if ((bVar12 || bVar11) || (param_7 == (code *)0x9)) {
      uVar4 = *(undefined4 *)(iVar8 + param_8 * 0x10 + 4);
      pcVar5 = (char *)(DAT_000ddc00 + 0xdda7c);
      iVar7 = *unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc + *param_11 +
              (int)*(char *)(param_9 + DAT_000ddbdc);
    }
    else {
      uVar4 = *(undefined4 *)(iVar9 + 4);
      pcVar5 = (char *)(DAT_000ddbfc + 0xdda32);
      iVar7 = *unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc + *param_11 +
              (int)*(char *)(param_9 + DAT_000ddbdc);
    }
    sprintf(&stack0x000002dc,pcVar5,uVar4,
            (int)*(short *)(iVar6 + (param_8 * 0xb + (int)*(char *)(iVar7 + DAT_000ddbe4)) * 2));
    piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x000002dc,(char *)(DAT_000ddc04 + 0xddaa2),extraout_s0_02);
    pcVar10 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000204,extraout_s0_03,extraout_s1_01);
    (*pcVar10)(piVar1,&stack0x00000204);
    pcVar10 = *(code **)(*piVar1 + 0x3c);
    iVar7 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
    uVar14 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x0000020c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar10)(piVar1,&stack0x0000020c);
    fVar13 = (float)(**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar1);
    iVar7 = (int)*(char *)(*param_11 + *unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc +
                           (int)*(char *)(param_9 + DAT_000ddbdc) + DAT_000ddbe4);
    if (9 < iVar7) goto LAB_000dde60;
    if ((bVar12 || bVar11) || (param_7 == (code *)0x9)) {
      pcVar5 = (char *)(DAT_000ddc10 + 0xddb38);
    }
    else {
      pcVar5 = (char *)(DAT_000ddc0c + 0xddb32);
    }
    sprintf(&stack0x00000340,pcVar5,(int)*(short *)(iVar6 + (param_8 * 0xb + iVar7 + 1) * 2));
    piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x00000340,(char *)(DAT_000ddc14 + 0xddb56),extraout_s0_04);
    pcVar10 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000214,extraout_s0_05,extraout_s1_02);
    (*pcVar10)(piVar2,&stack0x00000214);
    (**(code **)(*piVar2 + 0xf4))(piVar2);
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar4 = __addsf3(*puVar3,DAT_000ddbd8);
    __addsf3(uVar4,DAT_000ddbe8);
    iVar7 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
    uVar14 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x0000021c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar10)(piVar2,&stack0x0000021c);
  }
  else {
    param_7 = (code *)(uint)(param_8 != 7 && 1 < param_8 - 4U);
    if ((param_7 == (code *)0x0) || (param_8 == 9)) {
      uVar4 = *(undefined4 *)(iVar8 + param_8 * 0x10 + 4);
      pcVar5 = (char *)(DAT_000ddf00 + 0xddc7c);
      iVar9 = *unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc + *param_11 +
              (int)*(char *)(param_9 + DAT_000ddef8);
    }
    else {
      uVar4 = *(undefined4 *)(iVar9 + 4);
      pcVar5 = (char *)(DAT_000ddefc + 0xddc48);
      iVar9 = *unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc + *param_11 +
              (int)*(char *)(param_9 + DAT_000ddef8);
    }
    sprintf(&stack0x00000278,pcVar5,uVar4,
            (int)*(short *)(iVar6 + (param_8 * 0xb + (int)*(char *)(iVar9 + DAT_000ddf04)) * 2));
    piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x00000278,(char *)(DAT_000ddf08 + 0xddca2),extraout_s0_06);
    pcVar10 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000224,extraout_s0_07,extraout_s1_03);
    (*pcVar10)(piVar1,&stack0x00000224);
    pcVar10 = *(code **)(*piVar1 + 0x3c);
    iVar9 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
    uVar4 = __mulsf3(*(undefined4 *)(iVar9 + 4),0x3f000000);
    uVar4 = __addsf3(uVar4,DAT_000ddf10);
    uVar14 = __addsf3(uVar4,DAT_000ddf14);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x0000022c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar10)(piVar1,&stack0x0000022c);
    (**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar1);
    iVar9 = (int)*(char *)(*param_11 + *unaff_r6 * 0x6c + (*(int *)(param_9 + 0x118) + -7) * 0xc +
                           (int)*(char *)(param_9 + DAT_000ddef8) + DAT_000ddf04);
    if (iVar9 < 10) {
      if ((param_7 == (code *)0x0) || (param_8 == 9)) {
        pcVar5 = (char *)(DAT_000ddf20 + 0xddd48);
      }
      else {
        pcVar5 = (char *)(DAT_000ddf1c + 0xddd3e);
      }
      sprintf(&stack0x000002dc,pcVar5,(int)*(short *)(iVar6 + (param_8 * 0xb + iVar9 + 1) * 2));
      piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x000002dc,(char *)(DAT_000ddf24 + 0xddd62),extraout_s0_08);
      pcVar10 = *(code **)(*piVar2 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000234,extraout_s0_09,extraout_s1_04);
      (*pcVar10)(piVar2,&stack0x00000234);
      (**(code **)(*piVar2 + 0xf4))(piVar2);
      pcVar10 = *(code **)(*piVar2 + 0x3c);
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar4 = __addsf3(*puVar3,DAT_000ddf18);
      __addsf3(uVar4,DAT_000ddf28);
      iVar6 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
      uVar4 = __mulsf3(*(undefined4 *)(iVar6 + 4),0x3f000000);
      uVar4 = __addsf3(uVar4,DAT_000ddf10);
      uVar14 = __addsf3(uVar4,DAT_000ddf14);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x0000023c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      (*pcVar10)(piVar2,&stack0x0000023c);
      (**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar2);
    }
    sprintf(&stack0x00000340,(char *)(DAT_000ddf2c + 0xdddfc),(int)*(char *)(iVar7 + param_8));
    piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x00000340,(char *)(DAT_000ddf30 + 0xdde08),extraout_s0_10);
    pcVar10 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000244,extraout_s0_11,extraout_s1_05);
    (*pcVar10)(piVar2,&stack0x00000244);
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    iVar7 = (**(code **)(*unaff_r5 + 0x7c))(unaff_r5);
    uVar4 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
    uVar4 = __subsf3(uVar4,DAT_000ddf10);
    uVar14 = __subsf3(uVar4,DAT_000ddf14);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x0000024c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar10)(piVar2,&stack0x0000024c);
  }
  fVar13 = (float)(**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar2);
LAB_000dde60:
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(iVar8 + param_8 * 0x10 + 0xc),
                             (char *)(DAT_000ddf34 + 0xdde6e),fVar13);
  pcVar10 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000254,extraout_s0_12,extraout_s1_06);
  (*pcVar10)(piVar1,&stack0x00000254);
  param_23 = 0xdd;
  param_24 = 0xff;
  uVar14 = (**(code **)(*piVar1 + 0xf4))(piVar1);
  pcVar10 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x0000025c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar10)(piVar1,&stack0x0000025c);
  (**(code **)(*unaff_r5 + 0xc4))(unaff_r5,piVar1);
  if (in_stack_000003a4 == *in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


