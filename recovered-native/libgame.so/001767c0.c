/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001767c0  Symbol: png_check_keyword */

void png_check_keyword(undefined4 param_1,byte *param_2,byte **param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  char *__format;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  char acStack_54 [40];
  int local_2c;
  
  iVar2 = DAT_001769b0;
  iVar7 = DAT_001769ac + 0x1767d6;
  local_2c = **(int **)(iVar7 + DAT_001769b0);
  *param_3 = (byte *)0x0;
  if ((param_2 == (byte *)0x0) || (sVar3 = strlen((char *)param_2), sVar3 == 0)) {
    sVar3 = 0;
    png_warning(param_1,iVar7 + DAT_001769b4);
  }
  else {
    pbVar4 = (byte *)png_malloc_warn(param_1,sVar3 + 2);
    *param_3 = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      sVar3 = 0;
      png_warning(param_1,iVar7 + DAT_001769d0);
    }
    else {
      bVar5 = *param_2;
      if (bVar5 != 0) {
        __format = (char *)(iVar7 + DAT_001769b8);
        do {
          while ((pbVar6 = pbVar4, 0x21 < (byte)(bVar5 + 0x81) && (0x1f < bVar5))) {
            *pbVar6 = bVar5;
            param_2 = param_2 + 1;
            bVar5 = *param_2;
            pbVar4 = pbVar6 + 1;
            if (bVar5 == 0) goto LAB_0017688c;
          }
          snprintf(acStack_54,0x28,__format);
          png_warning(param_1,acStack_54);
          *pbVar6 = 0x20;
          param_2 = param_2 + 1;
          bVar5 = *param_2;
          pbVar4 = pbVar6 + 1;
        } while (bVar5 != 0);
LAB_0017688c:
        pbVar4 = pbVar6 + 1;
      }
      *pbVar4 = 0;
      pbVar4 = *param_3;
      pbVar6 = pbVar4 + (sVar3 - 1);
      if (*pbVar6 == 0x20) {
        png_warning(param_1,iVar7 + DAT_001769cc);
        if (*pbVar6 == 0x20) {
          do {
            *pbVar6 = 0;
            pbVar6 = pbVar6 + -1;
            sVar3 = sVar3 - 1;
          } while (*pbVar6 == 0x20);
          pbVar4 = *param_3;
        }
        else {
          pbVar4 = *param_3;
        }
      }
      bVar5 = *pbVar4;
      pbVar6 = pbVar4;
      if (bVar5 == 0x20) {
        png_warning(param_1,iVar7 + DAT_001769c8);
        bVar5 = *pbVar4;
        while (bVar5 == 0x20) {
          pbVar6 = pbVar6 + 1;
          sVar3 = sVar3 - 1;
          bVar5 = *pbVar6;
        }
        pbVar4 = *param_3;
      }
      if (bVar5 == 0) {
        *pbVar4 = 0;
      }
      else {
        bVar8 = false;
        bVar1 = false;
        do {
          while (!bVar1) {
            if (bVar5 != 0x20) goto LAB_001768e8;
            *pbVar4 = 0x20;
            bVar1 = true;
            pbVar4 = pbVar4 + 1;
LAB_001768cc:
            pbVar6 = pbVar6 + 1;
            bVar5 = *pbVar6;
            if (bVar5 == 0) goto LAB_001768f6;
          }
          if (bVar5 == 0x20) {
            sVar3 = sVar3 - 1;
            bVar8 = true;
            goto LAB_001768cc;
          }
LAB_001768e8:
          *pbVar4 = bVar5;
          pbVar6 = pbVar6 + 1;
          bVar5 = *pbVar6;
          pbVar4 = pbVar4 + 1;
          bVar1 = false;
        } while (bVar5 != 0);
LAB_001768f6:
        *pbVar4 = bVar5;
        if (bVar8) {
          png_warning(param_1,iVar7 + DAT_001769c4);
        }
      }
      if (sVar3 == 0) {
        png_free(param_1,*param_3);
        png_warning(param_1,iVar7 + DAT_001769c0);
      }
      else if (0x4f < sVar3) {
        sVar3 = 0x4f;
        png_warning(param_1,iVar7 + DAT_001769bc);
        (*param_3)[0x4f] = 0;
      }
    }
  }
  if (local_2c != **(int **)(iVar7 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar3);
  }
  return;
}


