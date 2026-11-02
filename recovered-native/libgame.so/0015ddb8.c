/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ddb8  Symbol: base64Decode */

undefined8 base64Decode(uchar *param_1,uint param_2,uchar **param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uchar *puVar3;
  int iVar4;
  uint local_14;
  
  local_14 = 0;
  uVar1 = __floatunsisf(param_2);
  uVar1 = __mulsf3(uVar1,DAT_0015de14);
  uVar1 = __mulsf3(uVar1,0x3e800000);
  __addsf3(uVar1,0x3f800000);
  uVar2 = __fixunssfsi();
  puVar3 = (uchar *)operator_new__(uVar2);
  *param_3 = puVar3;
  if ((puVar3 != (uchar *)0x0) &&
     (iVar4 = cocos2d::_base64Decode(param_1,param_2,puVar3,&local_14), 0 < iVar4)) {
    if (*param_3 != (uchar *)0x0) {
      operator_delete__(*param_3);
    }
    *param_3 = (uchar *)0x0;
    local_14 = 0;
  }
  return CONCAT44(param_1,local_14);
}


