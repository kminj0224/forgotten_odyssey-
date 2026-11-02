/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016b138  Symbol: png_read_end */

void png_read_end(int param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *__s1;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
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
  
  iVar10 = DAT_0016b398 + 0x16b14e;
  if (param_1 != 0) {
    png_crc_finish(param_1,0);
    iVar7 = DAT_0016b3a0;
    __s1 = (void *)(param_1 + 0x1e0);
    puVar13 = (undefined4 *)(iVar10 + DAT_0016b39c);
    uVar1 = *(undefined *)(puVar13 + 0xb);
    uVar2 = *(undefined *)(puVar13 + 0xd);
    uVar3 = *(undefined *)(puVar13 + 0xf);
    uVar4 = *(undefined *)(puVar13 + 0x11);
    uVar5 = *(undefined *)(puVar13 + 9);
    uVar6 = *(undefined *)(puVar13 + 0x13);
    do {
      while( true ) {
        local_30 = *puVar13;
        local_2c = *(undefined *)(puVar13 + 1);
        local_38 = puVar13[2];
        local_34 = *(undefined *)(puVar13 + 3);
        local_40 = puVar13[4];
        local_3c = *(undefined *)(puVar13 + 5);
        local_48 = puVar13[6];
        local_44 = *(undefined *)(puVar13 + 7);
        local_50 = puVar13[8];
        local_58 = puVar13[10];
        local_60 = puVar13[0xc];
        local_68 = puVar13[0xe];
        local_70 = puVar13[0x10];
        local_78 = puVar13[0x12];
        local_80 = puVar13[0x14];
        local_7c = *(undefined *)(puVar13 + 0x15);
        local_88 = puVar13[0x16];
        local_84 = *(undefined *)(puVar13 + 0x17);
        local_90 = puVar13[0x18];
        local_8c = *(undefined *)(puVar13 + 0x19);
        local_98 = puVar13[0x1a];
        local_94 = *(undefined *)(puVar13 + 0x1b);
        local_a0 = puVar13[0x1c];
        local_9c = *(undefined *)(puVar13 + 0x1d);
        local_a8 = puVar13[0x1e];
        local_a4 = *(undefined *)(puVar13 + 0x1f);
        puVar11 = (undefined4 *)(iVar10 + iVar7);
        local_b0 = *puVar11;
        local_ac = *(undefined *)(puVar11 + 1);
        local_b8 = puVar11[2];
        local_b4 = *(undefined *)(puVar11 + 3);
        local_c0 = puVar11[4];
        local_bc = *(undefined *)(puVar11 + 5);
        local_c8 = puVar11[6];
        local_c4 = *(undefined *)(puVar11 + 7);
        local_d0 = puVar11[8];
        local_cc = *(undefined *)(puVar11 + 9);
        local_54 = uVar1;
        local_4c = uVar5;
        local_74 = uVar6;
        local_6c = uVar4;
        local_64 = uVar3;
        local_5c = uVar2;
        iVar8 = png_read_chunk_header(param_1);
        iVar9 = memcmp(__s1,&local_30,4);
        if (iVar9 != 0) break;
        png_handle_IHDR(param_1,param_2,iVar8);
        iVar8 = *(int *)(param_1 + 300);
LAB_0016b1fa:
        if (iVar8 << 0x1b < 0) {
          return;
        }
      }
      iVar9 = memcmp(__s1,&local_40,4);
      if (iVar9 == 0) {
        png_handle_IEND(param_1,param_2,iVar8);
        iVar8 = *(int *)(param_1 + 300);
        goto LAB_0016b1fa;
      }
      iVar9 = png_handle_as_unknown(param_1,__s1);
      if (iVar9 == 0) {
        iVar9 = memcmp(__s1,&local_38,4);
        if (iVar9 == 0) {
          if ((iVar8 != 0) || (*(int *)(param_1 + 300) << 0x12 < 0)) {
                    /* WARNING: Subroutine does not return */
            png_error(param_1,iVar10 + DAT_0016b658);
          }
          png_crc_finish(param_1,0);
          iVar8 = *(int *)(param_1 + 300);
        }
        else {
          iVar9 = memcmp(__s1,&local_48,4);
          if (iVar9 == 0) {
            png_handle_PLTE(param_1,param_2,iVar8);
            iVar8 = *(int *)(param_1 + 300);
          }
          else {
            iVar9 = memcmp(__s1,&local_50,4);
            if (iVar9 == 0) {
              png_handle_bKGD(param_1,param_2,iVar8);
              iVar8 = *(int *)(param_1 + 300);
            }
            else {
              iVar9 = memcmp(__s1,&local_58,4);
              if (iVar9 == 0) {
                png_handle_cHRM(param_1,param_2,iVar8);
                iVar8 = *(int *)(param_1 + 300);
              }
              else {
                iVar9 = memcmp(__s1,&local_60,4);
                if (iVar9 == 0) {
                  png_handle_gAMA(param_1,param_2,iVar8);
                  iVar8 = *(int *)(param_1 + 300);
                }
                else {
                  iVar9 = memcmp(__s1,&local_68,4);
                  if (iVar9 == 0) {
                    png_handle_hIST(param_1,param_2,iVar8);
                    iVar8 = *(int *)(param_1 + 300);
                  }
                  else {
                    iVar9 = memcmp(__s1,&local_80,4);
                    if (iVar9 == 0) {
                      png_handle_oFFs(param_1,param_2,iVar8);
                      iVar8 = *(int *)(param_1 + 300);
                    }
                    else {
                      iVar9 = memcmp(__s1,&local_88,4);
                      if (iVar9 == 0) {
                        png_handle_pCAL(param_1,param_2,iVar8);
                        iVar8 = *(int *)(param_1 + 300);
                      }
                      else {
                        iVar9 = memcmp(__s1,&local_a0,4);
                        if (iVar9 == 0) {
                          png_handle_sCAL(param_1,param_2,iVar8);
                          iVar8 = *(int *)(param_1 + 300);
                        }
                        else {
                          iVar9 = memcmp(__s1,&local_90,4);
                          if (iVar9 == 0) {
                            png_handle_pHYs(param_1,param_2,iVar8);
                            iVar8 = *(int *)(param_1 + 300);
                          }
                          else {
                            iVar9 = memcmp(__s1,&local_98,4);
                            if (iVar9 == 0) {
                              png_handle_sBIT(param_1,param_2,iVar8);
                              iVar8 = *(int *)(param_1 + 300);
                            }
                            else {
                              iVar9 = memcmp(__s1,&local_b0,4);
                              if (iVar9 == 0) {
                                png_handle_sRGB(param_1,param_2,iVar8);
                                iVar8 = *(int *)(param_1 + 300);
                              }
                              else {
                                iVar9 = memcmp(__s1,&local_70,4);
                                if (iVar9 == 0) {
                                  png_handle_iCCP(param_1,param_2,iVar8);
                                  iVar8 = *(int *)(param_1 + 300);
                                }
                                else {
                                  iVar9 = memcmp(__s1,&local_a8,4);
                                  if (iVar9 == 0) {
                                    png_handle_sPLT(param_1,param_2,iVar8);
                                    iVar8 = *(int *)(param_1 + 300);
                                  }
                                  else {
                                    iVar9 = memcmp(__s1,&local_b8,4);
                                    if (iVar9 == 0) {
                                      png_handle_tEXt(param_1,param_2,iVar8);
                                      iVar8 = *(int *)(param_1 + 300);
                                    }
                                    else {
                                      iVar9 = memcmp(__s1,&local_c0,4);
                                      if (iVar9 == 0) {
                                        png_handle_tIME(param_1,param_2,iVar8);
                                        iVar8 = *(int *)(param_1 + 300);
                                      }
                                      else {
                                        iVar9 = memcmp(__s1,&local_c8,4);
                                        if (iVar9 == 0) {
                                          png_handle_tRNS(param_1,param_2,iVar8);
                                          iVar8 = *(int *)(param_1 + 300);
                                        }
                                        else {
                                          iVar9 = memcmp(__s1,&local_d0,4);
                                          if (iVar9 == 0) {
                                            png_handle_zTXt(param_1,param_2,iVar8);
                                            iVar8 = *(int *)(param_1 + 300);
                                          }
                                          else {
                                            iVar9 = memcmp(__s1,&local_78,4);
                                            if (iVar9 != 0) {
                                              png_handle_unknown(param_1,param_2,iVar8);
                                              goto LAB_0016b4f2;
                                            }
                                            png_handle_iTXt(param_1,param_2,iVar8);
                                            iVar8 = *(int *)(param_1 + 300);
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
        goto LAB_0016b1fa;
      }
      iVar9 = memcmp(__s1,&local_38,4);
      if ((iVar9 == 0) && ((iVar8 != 0 || (*(int *)(param_1 + 300) << 0x12 < 0)))) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar10 + DAT_0016b3a4);
      }
      png_handle_unknown(param_1,param_2,iVar8);
      iVar8 = memcmp(__s1,&local_48,4);
      if (iVar8 != 0) {
LAB_0016b4f2:
        iVar8 = *(int *)(param_1 + 300);
        goto LAB_0016b1fa;
      }
      uVar12 = *(uint *)(param_1 + 300) | 2;
      *(uint *)(param_1 + 300) = uVar12;
    } while (-1 < (int)(uVar12 << 0x1b));
  }
  return;
}


