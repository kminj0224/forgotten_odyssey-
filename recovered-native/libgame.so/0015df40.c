/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015df40  Symbol: tgaLoad */

/* cocos2d::tgaLoad(char const*) */

undefined4 * cocos2d::tgaLoad(char *param_1)

{
  undefined uVar1;
  ulong uVar2;
  uchar *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint __n;
  uint local_44;
  int local_3c;
  int local_38;
  undefined local_28 [2];
  undefined local_26;
  int local_24;
  uchar *local_20;
  ulong local_1c [2];
  
  iVar9 = *(int *)(DAT_0015e090 + 0x15df4c);
  local_24 = iVar9 + 8;
  local_20 = (uchar *)0x0;
  local_1c[0] = 0;
  puVar3 = (uchar *)CCFileUtils::getFileData(param_1,(char *)(DAT_0015e094 + 0x15df50),local_1c);
  uVar2 = local_1c[0];
  local_20 = puVar3;
  if (puVar3 == (uchar *)0x0) {
    puVar4 = (undefined4 *)0x0;
    goto LAB_0015e078;
  }
  puVar4 = (undefined4 *)malloc(0x14);
  iVar5 = tgaLoadHeader(puVar3,uVar2,(sImageTGA *)puVar4);
  if (iVar5 == 0) {
LAB_0015e074:
    uVar8 = 4;
  }
  else {
    uVar11 = (uint)*(byte *)(puVar4 + 1);
    uVar8 = 3;
    if ((uVar11 != 1) && ((uVar11 - 2 < 2 || (uVar8 = 5, uVar11 == 10)))) {
      iVar5 = (int)*(short *)(puVar4 + 2) * (int)*(short *)((int)puVar4 + 6);
      __n = (uint)(*(byte *)((int)puVar4 + 5) >> 3);
      pvVar6 = malloc(iVar5 * __n);
      puVar4[3] = pvVar6;
      if (pvVar6 != (void *)0x0) {
        if (uVar11 == 10) {
          bVar10 = 0;
          local_44 = 0x12;
          bVar7 = 0;
          local_3c = 0;
          for (local_38 = 0; local_38 != iVar5; local_38 = local_38 + 1) {
            if (bVar10 == 0) {
              uVar11 = local_44 + 1;
              if (uVar2 < uVar11) break;
              bVar10 = puVar3[local_44];
              bVar7 = bVar10 & 0x80;
              local_44 = uVar11;
              if ((bVar10 & 0x80) != 0) {
                bVar10 = bVar10 + 0x80;
              }
LAB_0015dffe:
              uVar11 = local_44 + __n;
              if (uVar2 < uVar11) break;
              memcpy(local_28,puVar3 + local_44,__n);
              uVar1 = local_28[0];
              local_44 = uVar11;
              if (2 < __n) {
                local_28[0] = local_26;
                local_26 = uVar1;
              }
            }
            else {
              bVar10 = bVar10 - 1;
              if (bVar7 == 0) goto LAB_0015dffe;
            }
            memcpy((void *)(puVar4[3] + local_3c),local_28,__n);
            local_3c = local_3c + __n;
          }
        }
        else {
          iVar5 = tgaLoadImageData(puVar3,uVar2,(sImageTGA *)puVar4);
          uVar8 = 2;
          if (iVar5 == 0) goto LAB_0015e076;
        }
        *puVar4 = 0;
        if ((puVar4[4] == 0) || (tgaFlipImage((sImageTGA *)puVar4), puVar4[4] == 0))
        goto LAB_0015e078;
      }
      goto LAB_0015e074;
    }
  }
LAB_0015e076:
  *puVar4 = uVar8;
LAB_0015e078:
  local_24 = iVar9 + 8;
  if (local_20 != (uchar *)0x0) {
    operator_delete__(local_20);
  }
  return puVar4;
}


