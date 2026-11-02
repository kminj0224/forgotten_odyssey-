/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169810  Symbol: png_set_gAMA */

void png_set_gAMA(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = DAT_001698c8 + 0x169820;
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar2 = __aeabi_dcmpgt(param_3,param_4,DAT_001698a8,DAT_001698ac);
    if (iVar2 == 0) {
      uVar3 = __truncdfsf2(param_3,param_4);
      uVar1 = DAT_001698b4;
      uVar4 = DAT_001698b0;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      uVar6 = __muldf3(param_3,param_4,uVar4,uVar1);
      __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_001698b8,DAT_001698bc);
      uVar4 = __fixdfsi();
      *(undefined4 *)(param_2 + 0xfc) = uVar4;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
      iVar2 = __aeabi_dcmpeq(param_3,param_4,DAT_001698c0,DAT_001698c4);
      if (iVar2 != 0) {
        png_warning(param_1,iVar5 + DAT_001698cc);
      }
    }
    else {
      png_warning(param_1,iVar5 + DAT_001698d0);
      uVar4 = DAT_001698d8;
      *(undefined4 *)(param_2 + 0x28) = DAT_001698d4;
      *(undefined4 *)(param_2 + 0xfc) = uVar4;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    }
  }
  return;
}


