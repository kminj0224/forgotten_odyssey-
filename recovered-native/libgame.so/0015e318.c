/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e318  Symbol: ccInflateCCZFile */

/* cocos2d::ZipUtils::ccInflateCCZFile(char const*, unsigned char**) */

undefined8 __thiscall
cocos2d::ZipUtils::ccInflateCCZFile(ZipUtils *this,char *param_1,uchar **param_2)

{
  ushort uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  char *__size;
  ulong local_20;
  char *local_1c;
  uchar **ppuStack_18;
  
  local_20 = 0;
  local_1c = param_1;
  ppuStack_18 = param_2;
  piVar2 = (int *)CCFileUtils::getFileData((char *)this,(char *)(DAT_0015e3d4 + 0x15e326),&local_20)
  ;
  if (-1 < (int)local_20) {
    if (*piVar2 == DAT_0015e3d8) {
      uVar1 = *(ushort *)(DAT_0015e3dc + 0x15e340);
      uVar5 = (uint)*(ushort *)((int)piVar2 + 6);
      if (0xff < uVar1) {
        uVar5 = (uint)(*(ushort *)((int)piVar2 + 6) >> 8) | (uVar5 << 0x18) >> 0x10;
      }
      if (uVar5 < 3) {
        uVar5 = (uint)*(ushort *)(piVar2 + 1);
        if (0xff < uVar1) {
          uVar5 = (uint)(*(ushort *)(piVar2 + 1) >> 8) | (uVar5 << 0x18) >> 0x10;
        }
        if (uVar5 == 0) {
          __size = (char *)piVar2[3];
          if (0xff < uVar1) {
            __size = (char *)((uint)__size >> 0x18 | (int)__size << 0x18 |
                              ((uint)__size & 0xff00) << 8 | ((uint)__size & 0xff0000) >> 8);
          }
          pvVar3 = malloc((size_t)__size);
          *(void **)param_1 = pvVar3;
          if (pvVar3 != (void *)0x0) {
            local_1c = __size;
            iVar4 = uncompress(pvVar3,&local_1c,piVar2 + 4,local_20 - 0x10);
            operator_delete__(piVar2);
            if (iVar4 == 0) goto LAB_0015e3a0;
            free(*(void **)param_1);
            *(undefined4 *)param_1 = 0;
            goto LAB_0015e39c;
          }
        }
      }
    }
    operator_delete__(piVar2);
  }
LAB_0015e39c:
  __size = (char *)0xffffffff;
LAB_0015e3a0:
  return CONCAT44(local_20,__size);
}


