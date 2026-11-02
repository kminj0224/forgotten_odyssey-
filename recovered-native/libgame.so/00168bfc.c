/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168bfc  Symbol: png_free_data */

void png_free_data(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = *(uint *)(param_2 + 0xb8);
    if ((int)((param_3 & uVar1) << 0x11) < 0) {
      if (param_4 == -1) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 0x30)) {
          do {
            png_free_data(param_1,param_2,0x4000,iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 0x30));
        }
        png_free(param_1,*(undefined4 *)(param_2 + 0x38));
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
        uVar1 = *(uint *)(param_2 + 0xb8);
      }
      else if ((*(int *)(param_2 + 0x38) != 0) &&
              (*(int *)(*(int *)(param_2 + 0x38) + param_4 * 0x1c + 4) != 0)) {
        png_free();
        *(undefined4 *)(*(int *)(param_2 + 0x38) + param_4 * 0x1c + 4) = 0;
        uVar1 = *(uint *)(param_2 + 0xb8);
      }
    }
    if ((int)((param_3 & uVar1) << 0x12) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0x4c));
      *(undefined4 *)(param_2 + 0x4c) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
    if ((int)((param_3 & uVar1) << 0x17) < 0) {
      *(uint *)(param_2 + 8) = DAT_00168f68 & *(uint *)(param_2 + 8);
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
    if ((int)((param_3 & uVar1) << 0x18) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0xa0));
      png_free(param_1,*(undefined4 *)(param_2 + 0xac));
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0xac) = 0;
      iVar3 = *(int *)(param_2 + 0xb0);
      if (iVar3 != 0) {
        if (*(char *)(param_2 + 0xb5) != '\0') {
          iVar2 = 0;
          while( true ) {
            png_free(param_1,*(undefined4 *)(iVar3 + iVar2 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xb0) + iVar2 * 4) = 0;
            iVar2 = iVar2 + 1;
            if ((int)(uint)*(byte *)(param_2 + 0xb5) <= iVar2) break;
            iVar3 = *(int *)(param_2 + 0xb0);
          }
          iVar3 = *(int *)(param_2 + 0xb0);
        }
        png_free(param_1,iVar3);
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      *(uint *)(param_2 + 8) = DAT_00168f78 & *(uint *)(param_2 + 8);
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
    if ((int)((param_3 & uVar1) << 0x1b) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0xc4));
      png_free(param_1,*(undefined4 *)(param_2 + 200));
      *(undefined4 *)(param_2 + 0xc4) = 0;
      *(undefined4 *)(param_2 + 200) = 0;
      *(uint *)(param_2 + 8) = DAT_00168f74 & *(uint *)(param_2 + 8);
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
    if ((int)((uVar1 & param_3) << 0x1a) < 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xd8) != 0) {
          if (0 < *(int *)(param_2 + 0xd8)) {
            iVar3 = 0;
            do {
              png_free_data(param_1,param_2,0x20,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xd8));
          }
          png_free(param_1,*(undefined4 *)(param_2 + 0xd4));
          *(undefined4 *)(param_2 + 0xd4) = 0;
          *(undefined4 *)(param_2 + 0xd8) = 0;
        }
        *(uint *)(param_2 + 8) = DAT_00168f7c & *(uint *)(param_2 + 8);
      }
      else if (*(int *)(param_2 + 0xd4) != 0) {
        iVar3 = param_4 * 0x10;
        png_free(param_1,*(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3));
        png_free(param_1,*(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3 + 8));
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3) = 0;
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3 + 8) = 0;
      }
    }
    if (*(int *)(param_1 + 0x334) != 0) {
      png_free(param_1);
      *(undefined4 *)(param_1 + 0x334) = 0;
    }
    uVar1 = *(uint *)(param_2 + 0xb8);
    if ((int)((param_3 & uVar1) << 0x16) < 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xc0) != 0) {
          if (0 < *(int *)(param_2 + 0xc0)) {
            iVar3 = 0;
            do {
              png_free_data(param_1,param_2,0x200,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xc0));
          }
          png_free(param_1,*(undefined4 *)(param_2 + 0xbc));
          *(undefined4 *)(param_2 + 0xbc) = 0;
          *(undefined4 *)(param_2 + 0xc0) = 0;
          uVar1 = *(uint *)(param_2 + 0xb8);
        }
      }
      else if (*(int *)(param_2 + 0xbc) != 0) {
        png_free(param_1,*(undefined4 *)(*(int *)(param_2 + 0xbc) + param_4 * 0x14 + 8));
        *(undefined4 *)(*(int *)(param_2 + 0xbc) + param_4 * 0x14 + 8) = 0;
        uVar1 = *(uint *)(param_2 + 0xb8);
      }
    }
    if ((int)((param_3 & uVar1) << 0x1c) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0x7c));
      *(undefined4 *)(param_2 + 0x7c) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
    if ((int)((param_3 & uVar1) << 0x13) < 0) {
      png_zfree(param_1,*(undefined4 *)(param_2 + 0x10));
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined2 *)(param_2 + 0x14) = 0;
      uVar1 = *(uint *)(param_2 + 0xb8);
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
    }
    if ((int)((param_3 & uVar1) << 0x19) < 0) {
      iVar3 = *(int *)(param_2 + 0xf8);
      if (iVar3 != 0) {
        if (0 < *(int *)(param_2 + 4)) {
          iVar2 = 0;
          while( true ) {
            iVar4 = iVar2 * 4;
            png_free(param_1,*(undefined4 *)(iVar3 + iVar4));
            iVar2 = iVar2 + 1;
            *(undefined4 *)(*(int *)(param_2 + 0xf8) + iVar4) = 0;
            if (*(int *)(param_2 + 4) <= iVar2) break;
            iVar3 = *(int *)(param_2 + 0xf8);
          }
          iVar3 = *(int *)(param_2 + 0xf8);
        }
        png_free(param_1,iVar3);
        *(undefined4 *)(param_2 + 0xf8) = 0;
      }
      *(uint *)(param_2 + 8) = DAT_00168f6c & *(uint *)(param_2 + 8);
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
    if (param_4 == -1) {
      *(uint *)(param_2 + 0xb8) = uVar1 & ~param_3;
    }
    else {
      *(uint *)(param_2 + 0xb8) = uVar1 & ~(DAT_00168f70 & param_3);
    }
  }
  return;
}


