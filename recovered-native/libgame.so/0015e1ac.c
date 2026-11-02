/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e1ac  Symbol: ccInflateMemoryWithHint */

/* cocos2d::ZipUtils::ccInflateMemoryWithHint(unsigned char*, unsigned int, unsigned char**,
   unsigned int*, unsigned int) */

int cocos2d::ZipUtils::ccInflateMemoryWithHint
              (uchar *param_1,uint param_2,uchar **param_3,uint *param_4,uint param_5)

{
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  uchar *local_50;
  uint local_4c;
  uchar *local_44;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_44 = (uchar *)operator_new__(param_5);
  iVar1 = DAT_0015e254;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  *param_3 = local_44;
  local_40 = param_5;
  local_50 = param_1;
  local_4c = param_2;
  iVar1 = inflateInit2_(&local_50,0x2f,iVar1 + 0x15e1d8,0x38);
  if (iVar1 == 0) {
    while (uVar3 = param_5, iVar1 = inflate(&local_50,0), iVar1 != 1) {
      if (iVar1 + 4 < 0 == SCARRY4(iVar1,4)) {
        if (iVar1 == -3 || iVar1 + 3 < 0 != SCARRY4(iVar1,3)) {
LAB_0015e206:
          inflateEnd(&local_50);
          return iVar1;
        }
        if (iVar1 == 2) {
          iVar1 = -3;
          goto LAB_0015e206;
        }
      }
      if (*param_3 != (uchar *)0x0) {
        operator_delete__(*param_3);
      }
      puVar2 = (uchar *)operator_new__(uVar3 * 2);
      *param_3 = puVar2;
      if (puVar2 == (uchar *)0x0) {
        inflateEnd(&local_50);
        return -4;
      }
      local_44 = puVar2 + uVar3;
      param_5 = uVar3 * 2;
      local_40 = uVar3;
    }
    *param_4 = uVar3 - local_40;
    iVar1 = inflateEnd(&local_50);
  }
  return iVar1;
}


