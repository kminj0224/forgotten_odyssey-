/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee484  Symbol: FUN_001ee484 */

int * FUN_001ee484(int *param_1,undefined *param_2,uint param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar3 = (undefined *)*param_1;
  puVar1 = *(undefined **)(puVar3 + -0xc);
  if (0x3ffffffcU - (int)puVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ee570 + DAT_001ee574);
  }
  puVar4 = puVar1 + param_3;
  if ((*(undefined **)(puVar3 + -8) < puVar4) || (0 < *(int *)(puVar3 + -4))) {
    if ((param_2 < puVar3) || (puVar1 = puVar3 + (int)puVar1, puVar1 < param_2)) {
      FUN_001ee274(param_1,puVar4,puVar1,puVar3,param_4);
      puVar3 = (undefined *)*param_1;
      puVar1 = *(undefined **)(puVar3 + -0xc);
    }
    else {
      iVar5 = (int)param_2 - (int)puVar3;
      FUN_001ee274(param_1,puVar4,puVar1,puVar3,param_4);
      puVar3 = (undefined *)*param_1;
      puVar1 = *(undefined **)(puVar3 + -0xc);
      param_2 = puVar3 + iVar5;
    }
  }
  if (param_3 == 1) {
    puVar3[(int)puVar1] = *param_2;
  }
  else {
    memcpy(puVar3 + (int)puVar1,param_2,param_3);
  }
  iVar2 = *param_1;
  iVar5 = DAT_001ee570 + 0x1ee530;
  bVar6 = iVar2 + -0xc != iVar5;
  if (bVar6) {
    iVar5 = 0;
    *(undefined4 *)(iVar2 + -4) = 0;
    *(undefined **)(iVar2 + -0xc) = puVar4;
  }
  if (bVar6) {
    puVar4[iVar2] = (char)iVar5;
  }
  return param_1;
}


