/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015724c  Symbol: _initWithJpgData */

/* cocos2d::CCImage::_initWithJpgData(void*, int) */

void __thiscall cocos2d::CCImage::_initWithJpgData(CCImage *this,void *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  
  iVar2 = DAT_00157344;
  puVar6 = *(undefined4 **)(DAT_00157348 + 0x157260);
  *(int *)(&stack0xfffffff0 + DAT_00157344) = param_2;
  *(undefined4 *)(&stack0xfffffff4 + DAT_00157344) = 0;
  *(undefined4 *)(&stack0x00000268 + DAT_00157344) = *puVar6;
  uVar3 = jpeg_std_error(&stack0xfffffff8 + DAT_00157344);
  *(undefined4 *)(&stack0x0000007c + iVar2) = uVar3;
  jpeg_CreateDecompress(&stack0x0000007c + iVar2,0x50,0x1e8);
  jpeg_mem_src(&stack0x0000007c + iVar2,param_1,*(undefined4 *)(&stack0xfffffff0 + iVar2));
  jpeg_read_header(&stack0x0000007c + iVar2,1);
  iVar5 = *(int *)(&stack0x000000a4 + iVar2);
  *(undefined4 **)(&stack0xfffffff0 + iVar2) = puVar6;
  pvVar7 = (void *)0x0;
  if (iVar5 != 2) {
    if ((iVar5 == 3) || (iVar5 == 1)) {
      *(undefined4 *)(&stack0x000000a8 + iVar2) = 2;
    }
    puVar1 = &stack0x0000007c + iVar2;
    jpeg_start_decompress(puVar1);
    iVar5 = *(int *)(&stack0x000000ec + iVar2);
    *(short *)(this + 4) = (short)*(undefined4 *)(&stack0x00000098 + iVar2);
    uVar3 = *(undefined4 *)(&stack0x0000009c + iVar2);
    this[0x10] = (CCImage)0x0;
    this[0x11] = (CCImage)0x0;
    *(short *)(this + 6) = (short)uVar3;
    *(undefined4 *)(this + 8) = 8;
    pvVar7 = operator_new__(*(int *)(&stack0x000000f8 + iVar2) * iVar5);
    *(void **)(&stack0xfffffff4 + iVar2) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      pvVar7 = operator_new__(*(int *)(&stack0x000000f8 + iVar2) *
                              *(int *)(&stack0x000000f0 + iVar2) *
                              *(int *)(&stack0x000000ec + iVar2));
      *(void **)(this + 0xc) = pvVar7;
      iVar5 = 0;
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        while (iVar8 = iVar5,
              *(uint *)(&stack0x00000108 + iVar2) < *(uint *)(&stack0x0000009c + iVar2)) {
          jpeg_read_scanlines(puVar1,&stack0xfffffff4 + iVar2,1);
          for (iVar5 = iVar8; uVar4 = iVar5 - iVar8,
              uVar4 < (uint)(*(int *)(&stack0x00000098 + iVar2) * *(int *)(&stack0x000000a0 + iVar2)
                            ); iVar5 = iVar5 + 1) {
            *(undefined *)(*(int *)(this + 0xc) + iVar5) =
                 *(undefined *)(*(int *)(&stack0xfffffff4 + iVar2) + uVar4);
          }
        }
        jpeg_finish_decompress();
        jpeg_destroy_decompress(puVar1);
        pvVar7 = (void *)0x1;
      }
    }
  }
  if (*(void **)(&stack0xfffffff4 + iVar2) != (void *)0x0) {
    operator_delete__(*(void **)(&stack0xfffffff4 + iVar2));
  }
  if (*(int *)(&stack0x00000268 + iVar2) == **(int **)(&stack0xfffffff0 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar7);
}


