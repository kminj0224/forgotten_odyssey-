/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016d7f0  Symbol: png_write_info */

/* WARNING: Type propagation algorithm not settling */

void png_write_info(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = DAT_0016dad4 + 0x16d806;
  if ((param_2 != 0) && (param_1 != 0)) {
    png_write_info_before_PLTE(param_1,param_2);
    uVar4 = *(uint *)(param_2 + 8);
    if ((int)(uVar4 << 0x1c) < 0) {
      png_write_PLTE(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x14));
      uVar4 = *(uint *)(param_2 + 8);
    }
    else if (*(char *)(param_2 + 0x19) == '\x03') {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar6 + DAT_0016dad8);
    }
    if ((int)(uVar4 << 0x1b) < 0) {
      if (*(int *)(param_1 + 0x134) << 0xc < 0) {
        cVar1 = *(char *)(param_2 + 0x19);
        if (cVar1 == '\x03') {
          iVar6 = 0;
          uVar4 = 0;
          if (*(short *)(param_2 + 0x16) != 0) {
            do {
              pbVar5 = (byte *)(*(int *)(param_2 + 0x4c) + iVar6);
              iVar6 = iVar6 + 1;
              *pbVar5 = ~*pbVar5;
              uVar4 = (uint)*(ushort *)(param_2 + 0x16);
            } while (iVar6 < (int)uVar4);
            cVar1 = *(char *)(param_2 + 0x19);
          }
        }
        else {
          uVar4 = (uint)*(ushort *)(param_2 + 0x16);
        }
      }
      else {
        uVar4 = (uint)*(ushort *)(param_2 + 0x16);
        cVar1 = *(char *)(param_2 + 0x19);
      }
      png_write_tRNS(param_1,*(undefined4 *)(param_2 + 0x4c),param_2 + 0x50,uVar4,cVar1);
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((int)(uVar4 << 0x1a) < 0) {
      png_write_bKGD(param_1,param_2 + 0x5a,*(undefined *)(param_2 + 0x19));
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((int)(uVar4 << 0x19) < 0) {
      png_write_hIST(param_1,*(undefined4 *)(param_2 + 0x7c),*(undefined2 *)(param_2 + 0x14));
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((int)(uVar4 << 0x17) < 0) {
      png_write_oFFs(param_1,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68),
                     *(undefined *)(param_2 + 0x6c));
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((int)(uVar4 << 0x15) < 0) {
      png_write_pCAL(param_1,*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4),
                     *(undefined4 *)(param_2 + 0xa8),*(undefined *)(param_2 + 0xb4),
                     *(undefined *)(param_2 + 0xb5),*(undefined4 *)(param_2 + 0xac),
                     *(undefined4 *)(param_2 + 0xb0));
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((int)(uVar4 << 0x11) < 0) {
      png_write_sCAL(param_1,*(undefined *)(param_2 + 0xdc),*(undefined4 *)(param_2 + 0xe0),
                     *(undefined4 *)(param_2 + 0xe4),*(undefined4 *)(param_2 + 0xe8),
                     *(undefined4 *)(param_2 + 0xec));
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((int)(uVar4 << 0x18) < 0) {
      png_write_pHYs(param_1,*(undefined4 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x74),
                     *(undefined *)(param_2 + 0x78));
      uVar4 = *(uint *)(param_2 + 8);
    }
    if ((uVar4 & 0x200) != 0) {
      png_write_tIME(param_1,param_2 + 0x3c);
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x200;
      uVar4 = *(uint *)(param_2 + 8);
    }
    if (((int)(uVar4 << 0x12) < 0) && (iVar6 = 0, 0 < *(int *)(param_2 + 0xd8))) {
      do {
        png_write_sPLT(param_1,*(int *)(param_2 + 0xd4) + iVar6 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_2 + 0xd8));
    }
    iVar6 = *(int *)(param_2 + 0x30);
    if (0 < iVar6) {
      iVar7 = 0;
      iVar8 = 0;
      do {
        while( true ) {
          piVar2 = (int *)(*(int *)(param_2 + 0x38) + iVar7);
          iVar3 = *piVar2;
          if (iVar3 < 1) break;
          png_write_iTXt(param_1,iVar3,piVar2[1],piVar2[5],piVar2[6],piVar2[2]);
          *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar7) = 0xfffffffd;
          iVar6 = *(int *)(param_2 + 0x30);
LAB_0016d896:
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x1c;
          if (iVar6 <= iVar8) goto LAB_0016d8cc;
        }
        if (iVar3 == 0) {
          png_write_zTXt(param_1,piVar2[1],piVar2[2],0,0);
          *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar7) = 0xfffffffe;
          iVar6 = *(int *)(param_2 + 0x30);
          goto LAB_0016d896;
        }
        if (iVar3 != -1) goto LAB_0016d896;
        png_write_tEXt(param_1,piVar2[1],piVar2[2],0);
        iVar8 = iVar8 + 1;
        *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar7) = 0xfffffffd;
        iVar6 = *(int *)(param_2 + 0x30);
        iVar7 = iVar7 + 0x1c;
      } while (iVar8 < iVar6);
    }
LAB_0016d8cc:
    if ((*(int *)(param_2 + 0xc0) != 0) &&
       (uVar4 = *(uint *)(param_2 + 0xbc), uVar4 < uVar4 + *(int *)(param_2 + 0xc0) * 0x14)) {
      do {
        iVar6 = png_handle_as_unknown(param_1,uVar4);
        if (((iVar6 != 1) &&
            ((*(byte *)(uVar4 + 0x10) != 0 && ((*(byte *)(uVar4 + 0x10) & 6) == 2)))) &&
           ((iVar6 == 3 ||
            (((*(byte *)(uVar4 + 3) & 0x20) != 0 || ((*(uint *)(param_1 + 0x130) & 0x10000) != 0))))
           )) {
          png_write_chunk(param_1,uVar4,*(undefined4 *)(uVar4 + 8),*(undefined4 *)(uVar4 + 0xc));
        }
        uVar4 = uVar4 + 0x14;
      } while (uVar4 < (uint)(*(int *)(param_2 + 0xbc) + *(int *)(param_2 + 0xc0) * 0x14));
    }
  }
  return;
}


