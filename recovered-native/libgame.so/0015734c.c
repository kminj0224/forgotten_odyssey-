/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015734c  Symbol: _initWithPngData */

/* cocos2d::CCImage::_initWithPngData(void*, int) */

void __thiscall cocos2d::CCImage::_initWithPngData(CCImage *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  uint uVar3;
  uint *puVar4;
  void **ppvVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  uint *puVar11;
  size_t __n;
  uint *puVar12;
  CCImage CVar13;
  int local_48;
  undefined4 ****local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  void *local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_0015752c + 0x15735c;
  local_24 = 0;
  local_1c = **(int **)(iVar1 + DAT_00157530);
  local_20 = 0;
  local_48 = 0;
  local_44 = (undefined4 ****)0x0;
  puVar11 = (uint *)0x0;
  if (7 < param_2) {
    memcpy(&local_24,param_1,8);
    iVar2 = png_sig_cmp(&local_24,0,8);
    puVar11 = (uint *)0x0;
    if (iVar2 == 0) {
      local_48 = png_create_read_struct(DAT_00157534 + 0x15739e,0,0);
      if (local_48 == 0) {
        puVar11 = (uint *)0x0;
      }
      else {
        local_44 = (undefined4 ****)png_create_info_struct();
        if (local_44 == (undefined4 ****)0x0) {
          puVar11 = (uint *)0x0;
        }
        else {
          __env = (__jmp_buf_tag *)
                  png_set_longjmp_fn(local_48,*(undefined4 *)(iVar1 + DAT_00157538),0x100);
          uVar3 = setjmp(__env);
          puVar11 = (uint *)0x0;
          if (uVar3 == 0) {
            local_30 = param_1;
            local_2c = param_2;
            local_28 = uVar3;
            png_set_read_fn(local_48,&local_30,DAT_0015753c + 0x1573e2);
            png_read_png(local_48,local_44,DAT_00157540,0);
            local_40 = uVar3;
            local_3c = uVar3;
            local_38 = uVar3;
            local_34 = uVar3;
            png_get_IHDR(local_48,local_44,&local_3c,&local_38,&local_34,&local_40,0,0,0);
            iVar2 = 4;
            this[0x11] = (CCImage)0x1;
            CVar13 = (CCImage)((*(byte *)((int)local_44 + 0x19) & 4) != 0);
            this[0x10] = CVar13;
            if (!(bool)CVar13) {
              iVar2 = 3;
            }
            puVar4 = (uint *)operator_new__(iVar2 * local_3c * local_38);
            puVar11 = puVar4;
            if (puVar4 != (uint *)0x0) {
              ppvVar5 = (void **)png_get_rows(local_48,local_44);
              __n = local_3c * iVar2;
              if (this[0x10] == (CCImage)0x0) {
                for (uVar3 = 0; uVar3 < local_38; uVar3 = uVar3 + 1) {
                  pvVar8 = *ppvVar5;
                  ppvVar5 = ppvVar5 + 1;
                  memcpy(puVar11,pvVar8,__n);
                  puVar11 = (uint *)((int)puVar11 + __n);
                }
              }
              else {
                uVar3 = 0;
                if ((int)(__n + 3) < 0 == SCARRY4(__n,3)) {
                  uVar3 = __n + 3 & 0xfffffffc;
                }
                for (uVar10 = 0; uVar10 < local_38; uVar10 = uVar10 + 1) {
                  puVar12 = puVar11;
                  for (iVar2 = 0; iVar2 < (int)__n; iVar2 = iVar2 + 4) {
                    pvVar8 = *ppvVar5;
                    uVar6 = (uint)*(byte *)((int)pvVar8 + iVar2 + 3);
                    iVar7 = uVar6 + 1;
                    *puVar12 = iVar7 * (uint)*(byte *)((int)pvVar8 + iVar2 + 1) & 0xffffff00 |
                               iVar7 * (uint)*(byte *)((int)pvVar8 + iVar2) >> 8 | uVar6 << 0x18 |
                               ((int)((uint)*(byte *)((int)pvVar8 + iVar2 + 2) * iVar7) >> 8) <<
                               0x10;
                    puVar12 = puVar12 + 1;
                  }
                  puVar11 = (uint *)((int)puVar11 + uVar3);
                  ppvVar5 = ppvVar5 + 1;
                }
              }
              puVar11 = (uint *)0x1;
              *(uint *)(this + 8) = local_34;
              *(uint **)(this + 0xc) = puVar4;
              *(short *)(this + 6) = (short)local_38;
              *(short *)(this + 4) = (short)local_3c;
            }
          }
        }
      }
    }
  }
  if (local_48 != 0) {
    ppppuVar9 = local_44;
    if (local_44 != (undefined4 ****)0x0) {
      ppppuVar9 = &local_44;
    }
    png_destroy_read_struct(&local_48,ppppuVar9,0);
  }
  if (local_1c == **(int **)(iVar1 + DAT_00157530)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar11);
}


