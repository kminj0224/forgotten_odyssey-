/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a84b4  Symbol: jpeg_default_qtables */

void jpeg_default_qtables(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_001a84e4 + 0x1a84c0;
  jpeg_add_quant_table(param_1,0,iVar1 + DAT_001a84e8,*(undefined4 *)(param_1 + 0x68),param_2);
  jpeg_add_quant_table(param_1,1,iVar1 + DAT_001a84ec,*(undefined4 *)(param_1 + 0x6c),param_2);
  return;
}


