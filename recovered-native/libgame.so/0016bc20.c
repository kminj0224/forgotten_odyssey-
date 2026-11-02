/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016bc20  Symbol: png_read_info */

void png_read_info(int param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  void *__s1;
  int iVar13;
  undefined4 local_d0;
  undefined local_cc;
  undefined4 local_c8;
  undefined local_c4;
  undefined4 local_c0;
  undefined local_bc;
  undefined4 local_b8;
  undefined local_b4;
  undefined4 local_b0;
  undefined local_ac;
  undefined4 local_a8;
  undefined local_a4;
  undefined4 local_a0;
  undefined local_9c;
  undefined4 local_98;
  undefined local_94;
  undefined4 local_90;
  undefined local_8c;
  undefined4 local_88;
  undefined local_84;
  undefined4 local_80;
  undefined local_7c;
  undefined4 local_78;
  undefined local_74;
  undefined4 local_70;
  undefined local_6c;
  undefined4 local_68;
  undefined local_64;
  undefined4 local_60;
  undefined local_5c;
  undefined4 local_58;
  undefined local_54;
  undefined4 local_50;
  undefined local_4c;
  undefined4 local_48;
  undefined local_44;
  undefined4 local_40;
  undefined local_3c;
  undefined4 local_38;
  undefined local_34;
  undefined4 local_30;
  undefined local_2c;
  
  iVar9 = DAT_0016bfb4 + 0x16bc36;
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar12 = (uint)*(byte *)(param_1 + 0x1f0);
    if (uVar12 < 8) {
      iVar13 = -uVar12 + 8;
      *(undefined4 *)(param_1 + 0x34c) = 0x11;
      png_read_data(param_1,param_2 + uVar12 + 0x20,iVar13);
      *(undefined *)(param_1 + 0x1f0) = 8;
      iVar13 = png_sig_cmp(param_2 + 0x20,uVar12,iVar13);
      if (iVar13 != 0) {
        if ((uVar12 < 4) && (iVar13 = png_sig_cmp(param_2 + 0x20,uVar12,-uVar12 + 4), iVar13 != 0))
        {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,iVar9 + DAT_0016c1bc);
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar9 + DAT_0016c1b0);
      }
      if (uVar12 < 3) {
        *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x1000;
      }
    }
    iVar13 = DAT_0016bfb8;
    puVar11 = (undefined4 *)(iVar9 + DAT_0016bfbc);
    uVar1 = *(undefined *)(puVar11 + 9);
    uVar2 = *(undefined *)(puVar11 + 0xb);
    __s1 = (void *)(param_1 + 0x1e0);
    uVar3 = *(undefined *)(puVar11 + 0xd);
    uVar4 = *(undefined *)(puVar11 + 0xf);
    uVar5 = *(undefined *)(puVar11 + 0x11);
    uVar6 = *(undefined *)(puVar11 + 0x13);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              local_30 = *puVar11;
              local_2c = *(undefined *)(puVar11 + 1);
              local_38 = puVar11[2];
              local_34 = *(undefined *)(puVar11 + 3);
              local_40 = puVar11[4];
              local_3c = *(undefined *)(puVar11 + 5);
              local_48 = puVar11[6];
              local_44 = *(undefined *)(puVar11 + 7);
              local_50 = puVar11[8];
              local_58 = puVar11[10];
              local_60 = puVar11[0xc];
              local_68 = puVar11[0xe];
              local_70 = puVar11[0x10];
              local_78 = puVar11[0x12];
              local_80 = puVar11[0x14];
              local_7c = *(undefined *)(puVar11 + 0x15);
              local_88 = puVar11[0x16];
              local_84 = *(undefined *)(puVar11 + 0x17);
              local_90 = puVar11[0x18];
              local_8c = *(undefined *)(puVar11 + 0x19);
              local_98 = puVar11[0x1a];
              local_94 = *(undefined *)(puVar11 + 0x1b);
              local_a0 = puVar11[0x1c];
              local_9c = *(undefined *)(puVar11 + 0x1d);
              local_a8 = puVar11[0x1e];
              local_a4 = *(undefined *)(puVar11 + 0x1f);
              puVar10 = (undefined4 *)(iVar9 + iVar13);
              local_b0 = *puVar10;
              local_ac = *(undefined *)(puVar10 + 1);
              local_b8 = puVar10[2];
              local_b4 = *(undefined *)(puVar10 + 3);
              local_c0 = puVar10[4];
              local_bc = *(undefined *)(puVar10 + 5);
              local_c8 = puVar10[6];
              local_c4 = *(undefined *)(puVar10 + 7);
              local_d0 = puVar10[8];
              local_cc = *(undefined *)(puVar10 + 9);
              local_4c = uVar1;
              local_74 = uVar6;
              local_6c = uVar5;
              local_64 = uVar4;
              local_5c = uVar3;
              local_54 = uVar2;
              uVar7 = png_read_chunk_header(param_1);
              iVar8 = memcmp(__s1,&local_38,4);
              if ((iVar8 == 0) && ((int)(*(uint *)(param_1 + 300) << 0x1c) < 0)) {
                *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x2000;
              }
              iVar8 = memcmp(__s1,&local_30,4);
              if (iVar8 != 0) break;
              png_handle_IHDR(param_1,param_2,uVar7);
            }
            iVar8 = memcmp(__s1,&local_40,4);
            if (iVar8 != 0) break;
            png_handle_IEND(param_1,param_2,uVar7);
          }
          iVar8 = png_handle_as_unknown(param_1,__s1);
          if (iVar8 != 0) break;
          iVar8 = memcmp(__s1,&local_48,4);
          if (iVar8 == 0) {
            png_handle_PLTE(param_1,param_2,uVar7);
          }
          else {
            iVar8 = memcmp(__s1,&local_38,4);
            if (iVar8 == 0) {
              if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
                png_error(param_1,iVar9 + DAT_0016c1b8);
              }
              if ((*(char *)(param_1 + 0x1ea) == '\x03') && (-1 < *(int *)(param_1 + 300) << 0x1e))
              {
                    /* WARNING: Subroutine does not return */
                png_error(param_1,iVar9 + DAT_0016c1b4);
              }
              *(undefined4 *)(param_1 + 0x1d0) = uVar7;
              *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
              return;
            }
            iVar8 = memcmp(__s1,&local_50,4);
            if (iVar8 == 0) {
              png_handle_bKGD(param_1,param_2,uVar7);
            }
            else {
              iVar8 = memcmp(__s1,&local_58,4);
              if (iVar8 == 0) {
                png_handle_cHRM(param_1,param_2,uVar7);
              }
              else {
                iVar8 = memcmp(__s1,&local_60,4);
                if (iVar8 == 0) {
                  png_handle_gAMA(param_1,param_2,uVar7);
                }
                else {
                  iVar8 = memcmp(__s1,&local_68,4);
                  if (iVar8 == 0) {
                    png_handle_hIST(param_1,param_2,uVar7);
                  }
                  else {
                    iVar8 = memcmp(__s1,&local_80,4);
                    if (iVar8 == 0) {
                      png_handle_oFFs(param_1,param_2,uVar7);
                    }
                    else {
                      iVar8 = memcmp(__s1,&local_88,4);
                      if (iVar8 == 0) {
                        png_handle_pCAL(param_1,param_2,uVar7);
                      }
                      else {
                        iVar8 = memcmp(__s1,&local_a0,4);
                        if (iVar8 == 0) {
                          png_handle_sCAL(param_1,param_2,uVar7);
                        }
                        else {
                          iVar8 = memcmp(__s1,&local_90,4);
                          if (iVar8 == 0) {
                            png_handle_pHYs(param_1,param_2,uVar7);
                          }
                          else {
                            iVar8 = memcmp(__s1,&local_98,4);
                            if (iVar8 == 0) {
                              png_handle_sBIT(param_1,param_2,uVar7);
                            }
                            else {
                              iVar8 = memcmp(__s1,&local_b0,4);
                              if (iVar8 == 0) {
                                png_handle_sRGB(param_1,param_2,uVar7);
                              }
                              else {
                                iVar8 = memcmp(__s1,&local_70,4);
                                if (iVar8 == 0) {
                                  png_handle_iCCP(param_1,param_2,uVar7);
                                }
                                else {
                                  iVar8 = memcmp(__s1,&local_a8,4);
                                  if (iVar8 == 0) {
                                    png_handle_sPLT(param_1,param_2,uVar7);
                                  }
                                  else {
                                    iVar8 = memcmp(__s1,&local_b8,4);
                                    if (iVar8 == 0) {
                                      png_handle_tEXt(param_1,param_2,uVar7);
                                    }
                                    else {
                                      iVar8 = memcmp(__s1,&local_c0,4);
                                      if (iVar8 == 0) {
                                        png_handle_tIME(param_1,param_2,uVar7);
                                      }
                                      else {
                                        iVar8 = memcmp(__s1,&local_c8,4);
                                        if (iVar8 == 0) {
                                          png_handle_tRNS(param_1,param_2,uVar7);
                                        }
                                        else {
                                          iVar8 = memcmp(__s1,&local_d0,4);
                                          if (iVar8 == 0) {
                                            png_handle_zTXt(param_1,param_2,uVar7);
                                          }
                                          else {
                                            iVar8 = memcmp(__s1,&local_78,4);
                                            if (iVar8 == 0) {
                                              png_handle_iTXt(param_1,param_2,uVar7);
                                            }
                                            else {
                                              png_handle_unknown(param_1,param_2,uVar7);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar8 = memcmp(__s1,&local_38,4);
        if (iVar8 == 0) {
          *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
        }
        png_handle_unknown(param_1,param_2,uVar7);
        iVar8 = memcmp(__s1,&local_48,4);
        if (iVar8 != 0) break;
        *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 2;
      }
      iVar8 = memcmp(__s1,&local_38,4);
    } while (iVar8 != 0);
    if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar9 + DAT_0016c1b8);
    }
    if ((*(char *)(param_1 + 0x1ea) == '\x03') && (-1 < *(int *)(param_1 + 300) << 0x1e)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar9 + DAT_0016c1b4);
    }
  }
  return;
}


