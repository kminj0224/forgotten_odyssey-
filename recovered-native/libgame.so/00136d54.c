/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136d54  Symbol: tick */

/* cocos2d::CCScheduler::tick(float) */

void cocos2d::CCScheduler::tick(float param_1)

{
  CCScheduler *in_r0;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 in_r1;
  _listEntry *p_Var4;
  int iVar5;
  undefined4 uVar6;
  uint **ppuVar7;
  _listEntry *p_Var8;
  
  in_r0[0x31] = (CCScheduler)0x1;
  uVar6 = *(undefined4 *)(in_r0 + 0x14);
  iVar1 = __aeabi_fcmpeq(uVar6,0x3f800000);
  if (iVar1 == 0) {
    in_r1 = __mulsf3(in_r1,uVar6);
  }
  iVar1 = *(int *)(in_r0 + 0x18);
  while (iVar5 = iVar1, iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 4);
    if ((*(char *)(iVar5 + 0x10) == '\0') && (*(char *)(iVar5 + 0x11) == '\0')) {
      (**(code **)(**(int **)(iVar5 + 8) + 0x10))(*(int **)(iVar5 + 8),in_r1);
    }
  }
  iVar1 = *(int *)(in_r0 + 0x1c);
  while (iVar5 = iVar1, iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 4);
    if ((*(char *)(iVar5 + 0x10) == '\0') && (*(char *)(iVar5 + 0x11) == '\0')) {
      (**(code **)(**(int **)(iVar5 + 8) + 0x10))(*(int **)(iVar5 + 8),in_r1);
    }
  }
  iVar1 = *(int *)(in_r0 + 0x20);
  while (iVar5 = iVar1, iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 4);
    if ((*(char *)(iVar5 + 0x10) == '\0') && (*(char *)(iVar5 + 0x11) == '\0')) {
      (**(code **)(**(int **)(iVar5 + 8) + 0x10))(*(int **)(iVar5 + 8),in_r1);
    }
  }
  ppuVar7 = *(uint ***)(in_r0 + 0x28);
  while (ppuVar7 != (uint **)0x0) {
    *(uint ***)(in_r0 + 0x2c) = ppuVar7;
    in_r0[0x30] = (CCScheduler)0x0;
    if (*(char *)((int)ppuVar7 + 0x11) == '\0') {
      puVar2 = (uint *)0x0;
      while( true ) {
        ppuVar7[2] = puVar2;
        if ((uint *)**ppuVar7 <= ppuVar7[2]) break;
        puVar2 = *(uint **)((int)ppuVar7[2] * 4 + (*ppuVar7)[2]);
        *(undefined *)(ppuVar7 + 4) = 0;
        ppuVar7[3] = puVar2;
        (**(code **)(*puVar2 + 0x10))(puVar2,in_r1);
        if (*(char *)(ppuVar7 + 4) != '\0') {
          CCObject::release((CCObject *)ppuVar7[3]);
        }
        ppuVar7[3] = (uint *)0x0;
        puVar2 = (uint *)((int)ppuVar7[2] + 1);
      }
    }
    ppuVar7 = (uint **)ppuVar7[7];
    if ((in_r0[0x30] != (CCScheduler)0x0) && (***(int ***)(in_r0 + 0x2c) == 0)) {
      removeHashElement(in_r0,(_hashSelectorEntry *)*(int ***)(in_r0 + 0x2c));
    }
  }
  if (*(CCArray **)(in_r0 + 0x34) != (CCArray *)0x0) {
    uVar3 = CCArray::count(*(CCArray **)(in_r0 + 0x34));
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      iVar1 = CCArray::objectAtIndex(*(CCArray **)(in_r0 + 0x34),uVar3);
      if (*(char *)(iVar1 + 0x19) == '\0') {
        if (*(char *)(iVar1 + 0x18) == '\0') {
          (**(code **)(**(int **)(iVar1 + 0x14) + 0x10))(*(int **)(iVar1 + 0x14),in_r1);
        }
      }
      else {
        CCArray::removeObjectAtIndex(*(uint *)(in_r0 + 0x34));
      }
    }
  }
  p_Var8 = *(_listEntry **)(in_r0 + 0x18);
  while (p_Var4 = p_Var8, p_Var4 != (_listEntry *)0x0) {
    p_Var8 = *(_listEntry **)(p_Var4 + 4);
    if (p_Var4[0x11] != (_listEntry)0x0) {
      removeUpdateFromHash(in_r0,p_Var4);
    }
  }
  p_Var8 = *(_listEntry **)(in_r0 + 0x1c);
  while (p_Var4 = p_Var8, p_Var4 != (_listEntry *)0x0) {
    p_Var8 = *(_listEntry **)(p_Var4 + 4);
    if (p_Var4[0x11] != (_listEntry)0x0) {
      removeUpdateFromHash(in_r0,p_Var4);
    }
  }
  p_Var8 = *(_listEntry **)(in_r0 + 0x20);
  while (p_Var4 = p_Var8, p_Var4 != (_listEntry *)0x0) {
    p_Var8 = *(_listEntry **)(p_Var4 + 4);
    if (p_Var4[0x11] != (_listEntry)0x0) {
      removeUpdateFromHash(in_r0,p_Var4);
    }
  }
  in_r0[0x31] = (CCScheduler)0x0;
  *(undefined4 *)(in_r0 + 0x2c) = 0;
  return;
}


