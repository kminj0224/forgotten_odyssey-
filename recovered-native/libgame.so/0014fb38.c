/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fb38  Symbol: vertexFromTexCoord */

/* cocos2d::CCProgressTimer::vertexFromTexCoord(cocos2d::CCPoint const&) */

undefined4 * cocos2d::CCProgressTimer::vertexFromTexCoord(CCPoint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float extraout_s0;
  float extraout_s0_00;
  float fVar9;
  float extraout_s1;
  float extraout_s1_00;
  float fVar11;
  undefined8 uVar10;
  int iStack_4;
  
  iVar1 = DAT_0014fd90;
  *(CCPoint **)(&stack0xfffffff0 + DAT_0014fd90) = param_1;
  *(undefined4 *)((int)&iStack_4 + DAT_0014fd90) = in_r1;
  *(undefined4 *)(&stack0x00000000 + DAT_0014fd90) = in_r2;
  CCPoint::CCPoint((CCPoint *)(&stack0x00000004 + DAT_0014fd90));
  iVar5 = *(int *)((int)&iStack_4 + iVar1);
  iVar2 = (**(code **)(**(int **)(iVar5 + 0x104) + 0x118))();
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)(DAT_0014fd94 + 0x14fd7a);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_0014fd94 + 0x14fd76);
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x104);
    pvVar6 = (void *)(iVar5 + 0x160);
    memcpy(&stack0x0000002c + iVar1,pvVar6,0x60);
    uVar4 = *(undefined4 *)(&stack0x00000084 + iVar1);
    memcpy(&stack0x0000008c + iVar1,pvVar6,0x60);
    iVar2 = __aeabi_fcmplt(uVar4,*(undefined4 *)(&stack0x000000b4 + iVar1));
    if (iVar2 == 0) {
      memcpy(&stack0x0000014c + iVar1,pvVar6,0x60);
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x000001a4 + iVar1);
    }
    else {
      memcpy(&stack0x000000ec + iVar1,pvVar6,0x60);
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000114 + iVar1);
    }
    pvVar6 = (void *)(iVar5 + 0x160);
    memcpy(&stack0x000001ac + iVar1,pvVar6,0x60);
    uVar4 = *(undefined4 *)(&stack0x00000204 + iVar1);
    memcpy(&stack0x0000020c + iVar1,pvVar6,0x60);
    iVar2 = __aeabi_fcmpgt(uVar4,*(undefined4 *)(&stack0x00000234 + iVar1));
    if (iVar2 == 0) {
      memcpy(&stack0x000002cc + iVar1,pvVar6,0x60);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000324 + iVar1);
    }
    else {
      memcpy(&stack0x0000026c + iVar1,pvVar6,0x60);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000294 + iVar1);
    }
    pvVar6 = (void *)(iVar5 + 0x160);
    memcpy(&stack0x0000032c + iVar1,pvVar6,0x60);
    uVar4 = *(undefined4 *)(&stack0x00000340 + iVar1);
    memcpy(&stack0x0000038c + iVar1,pvVar6,0x60);
    iVar2 = __aeabi_fcmplt(uVar4,*(undefined4 *)(&stack0x000003b8 + iVar1));
    if (iVar2 == 0) {
      memcpy(&stack0x0000044c + iVar1,pvVar6,0x60);
    }
    else {
      memcpy(&stack0x000003ec + iVar1,pvVar6,0x60);
    }
    pvVar6 = (void *)(iVar5 + 0x160);
    memcpy(&stack0x000004ac + iVar1,pvVar6,0x60);
    uVar4 = *(undefined4 *)(&stack0x000004c0 + iVar1);
    memcpy(&stack0x0000050c + iVar1,pvVar6,0x60);
    iVar2 = __aeabi_fcmpgt(uVar4,*(undefined4 *)(&stack0x00000538 + iVar1));
    if (iVar2 == 0) {
      memcpy(&stack0x000005cc + iVar1,pvVar6,0x60);
      fVar9 = extraout_s0_00;
      fVar11 = extraout_s1_00;
    }
    else {
      memcpy(&stack0x0000056c + iVar1,pvVar6,0x60);
      fVar9 = extraout_s0;
      fVar11 = extraout_s1;
    }
    uVar10 = CCPoint::CCPoint((CCPoint *)(&stack0x0000000c + iVar1),fVar9,fVar11);
    CCPoint::CCPoint((CCPoint *)(&stack0x00000014 + iVar1),(float)uVar10,
                     (float)((ulonglong)uVar10 >> 0x20));
    pvVar6 = (void *)(*(int *)(*(int *)((int)&iStack_4 + iVar1) + 0x104) + 0x160);
    memcpy(&stack0x0000062c + iVar1,pvVar6,0x60);
    uVar4 = *(undefined4 *)(&stack0x00000674 + iVar1);
    memcpy(&stack0x0000068c + iVar1,pvVar6,0x60);
    __subsf3(uVar4,*(undefined4 *)(&stack0x000006a4 + iVar1));
    memcpy(&stack0x000006ec + iVar1,pvVar6,0x60);
    uVar4 = *(undefined4 *)(&stack0x000006f0 + iVar1);
    memcpy(&stack0x0000074c + iVar1,pvVar6,0x60);
    uVar10 = __subsf3(uVar4,*(undefined4 *)(&stack0x00000768 + iVar1));
    CCSize::CCSize((CCSize *)(&stack0x0000001c + iVar1),(float)uVar10,
                   (float)((ulonglong)uVar10 >> 0x20));
    uVar7 = *(undefined4 *)(&stack0x00000014 + iVar1);
    uVar8 = *(undefined4 *)(&stack0x00000018 + iVar1);
    uVar4 = __subsf3(**(undefined4 **)(&stack0x00000000 + iVar1),uVar7);
    uVar4 = __mulsf3(uVar4,*(undefined4 *)(&stack0x0000001c + iVar1));
    uVar7 = __subsf3(*(undefined4 *)(&stack0x0000000c + iVar1),uVar7);
    __divsf3(uVar4,uVar7);
    uVar4 = __subsf3(*(undefined4 *)(*(int *)(&stack0x00000000 + iVar1) + 4),uVar8);
    uVar7 = __subsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar8);
    uVar4 = __divsf3(uVar4,uVar7);
    uVar4 = __subsf3(0x3f800000,uVar4);
    uVar10 = __mulsf3(uVar4,*(undefined4 *)(&stack0x00000020 + iVar1));
    CCPoint::CCPoint((CCPoint *)(&stack0x00000024 + iVar1),(float)uVar10,
                     (float)((ulonglong)uVar10 >> 0x20));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000024 + iVar1);
    uVar4 = *(undefined4 *)(&stack0x00000028 + iVar1);
  }
  puVar3 = *(undefined4 **)(&stack0xfffffff0 + iVar1);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar4;
  *puVar3 = *(undefined4 *)(&stack0x00000004 + iVar1);
  puVar3[1] = *(undefined4 *)(&stack0x00000008 + iVar1);
  return puVar3;
}


