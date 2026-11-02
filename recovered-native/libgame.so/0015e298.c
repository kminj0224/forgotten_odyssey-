/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e298  Symbol: ccInflateGZipFile */

/* cocos2d::ZipUtils::ccInflateGZipFile(char const*, unsigned char**) */

undefined8 cocos2d::ZipUtils::ccInflateGZipFile(char *param_1,uchar **param_2)

{
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  undefined4 in_r2;
  undefined4 in_r3;
  uint uVar4;
  uint __size;
  int iVar5;
  
  iVar1 = gzopen(param_1,DAT_0015e314 + 0x15e2a2,in_r2,in_r3,param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = (uchar *)malloc(0x80000);
    uVar4 = 0x80000;
    *param_2 = puVar2;
    iVar5 = 0;
    __size = uVar4;
    while (uVar3 = gzread(iVar1,*param_2 + iVar5,uVar4), -1 < (int)uVar3) {
      if ((uVar3 == 0) || (iVar5 = iVar5 + uVar3, uVar3 < uVar4)) {
        gzclose(iVar1);
        goto LAB_0015e312;
      }
      uVar4 = uVar4 * 2;
      __size = __size + uVar4;
      puVar2 = (uchar *)realloc(*param_2,__size);
      if (puVar2 == (uchar *)0x0) {
        free(*param_2);
        goto LAB_0015e2fa;
      }
      *param_2 = puVar2;
    }
    free(*param_2);
    puVar2 = (uchar *)0x0;
LAB_0015e2fa:
    *param_2 = puVar2;
  }
  iVar5 = -1;
LAB_0015e312:
  return CONCAT44(iVar1,iVar5);
}


