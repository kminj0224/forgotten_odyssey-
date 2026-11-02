/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000155b4  Symbol: FUN_000155b4 */

undefined8 FUN_000155b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  iVar1 = DAT_00015668;
  ppiVar5 = (int **)(DAT_00015668 + 0x155c0);
  piVar2 = *ppiVar5;
  ppiVar4 = *(int ***)(DAT_0001566c + 0x155c4);
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,ppiVar4,DAT_00015670);
  if (iVar3 == 0) {
    piVar2 = *ppiVar5;
    iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,ppiVar4,0);
    if (iVar3 < 0) {
      __android_log_print(3,DAT_0001567c + 0x155fe,DAT_00015680 + 0x15600);
      iVar3 = 0;
      goto LAB_00015662;
    }
    iVar3 = (**(code **)(**ppiVar4 + 0x18))(*ppiVar4,DAT_00015684 + 0x1560e);
    *(int *)(iVar1 + 0x155c4) = iVar3;
    if (iVar3 == 0) {
      __android_log_print(3,DAT_00015688 + 0x15622,DAT_0001568c + 0x15624);
      iVar3 = 0;
      goto LAB_00015662;
    }
    piVar2 = *ppiVar4;
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x1c4))(piVar2,iVar3,param_1,param_2,param_1,param_2,param_3);
      (**(code **)(**ppiVar4 + 0x5c))(*ppiVar4,*(undefined4 *)(iVar1 + 0x155c4));
      if (iVar3 != 0) goto LAB_00015662;
    }
    __android_log_print(3,DAT_00015690 + 0x1565a,DAT_00015694 + 0x1565c,param_1);
  }
  else {
    __android_log_print(3,DAT_00015674 + 0x155de,DAT_00015678 + 0x155e0);
  }
  iVar3 = 0;
LAB_00015662:
  return CONCAT44(param_1,iVar3);
}


