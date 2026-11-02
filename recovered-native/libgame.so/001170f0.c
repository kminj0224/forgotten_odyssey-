/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001170f0  Symbol: Stage_Value_Pass */

/* Stage_Value_Pass(_Stage_Value*, int) */

void Stage_Value_Pass(_Stage_Value *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_00117240 + 0x1170fc);
  uVar2 = __fixsfsi(*(undefined4 *)(param_2 * 0x40 + iVar4));
  iVar4 = iVar4 + param_2 * 0x40;
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar4 + 8);
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0xc));
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x14));
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x1c));
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x24));
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x28));
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + 0x34));
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  iVar1 = DAT_00117244;
  uVar3 = *(undefined4 *)(iVar4 + 0x38);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(iVar1 + 0x117166),uVar2);
}


