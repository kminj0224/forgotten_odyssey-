/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f27f8  Symbol: Get_Mana */

/* Get_Mana(int) */

void Get_Mana(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (**(code **)(***(int ***)(DAT_000f2890 + 0xf2804) + 0xa8))();
  iVar1 = *(int *)(DAT_000f28a0 + 0xf2840) +
          *(int *)(**(int **)(DAT_000f2894 + 0xf2814) +
                   *(int *)(*(int *)(iVar1 + 4) + 4) * 0x50 +
                   **(int **)(DAT_000f2898 + 0xf2820) * 0x2d0 + DAT_000f289c) * 0x18;
  if (*(int *)(iVar1 + 0x14) == 0xd) {
    uVar3 = __floatsidf();
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar4 = __floatsidf(*(undefined4 *)(iVar1 + 0x10));
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_000f2888,DAT_000f288c);
    uVar4 = __muldf3((int)uVar3,uVar2,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    __subdf3((int)uVar3,uVar2,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    __truncdfsf2();
  }
  else {
    __floatsisf(param_1);
  }
  __fixsfsi();
  return;
}


