/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac2a8  Symbol: FUN_001ac2a8 */

bool FUN_001ac2a8(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (((((((*(int *)(param_1 + 0x4c) == 0) && (*(int *)(param_1 + 0x130) == 0)) &&
         (*(int *)(param_1 + 0x28) == 3)) &&
        ((*(int *)(param_1 + 0x24) == 3 && (*(int *)(param_1 + 0x2c) == 2)))) &&
       ((*(int *)(param_1 + 0x78) == 3 &&
        ((iVar1 = *(int *)(param_1 + 0xd8), *(int *)(iVar1 + 8) == 2 &&
         (*(int *)(iVar1 + 0x60) == 1)))))) && (*(int *)(iVar1 + 0xb8) == 1)) &&
     ((((*(int *)(iVar1 + 0xc) < 3 && (*(int *)(iVar1 + 100) == 1)) && (*(int *)(iVar1 + 0xbc) == 1)
       ) && (((iVar2 = *(int *)(iVar1 + 0x24), iVar2 == *(int *)(param_1 + 0x140) &&
              (iVar2 == *(int *)(iVar1 + 0x7c))) &&
             ((iVar2 == *(int *)(iVar1 + 0xd4) &&
              ((iVar2 = *(int *)(iVar1 + 0x28), iVar2 == *(int *)(param_1 + 0x144) &&
               (iVar2 == *(int *)(iVar1 + 0x80))))))))))) {
    bVar3 = iVar2 == *(int *)(iVar1 + 0xd8);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


