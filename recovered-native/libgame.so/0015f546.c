/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f546  Symbol: unzGoToFilePos64 */

/* cocos2d::unzGoToFilePos64(void*, cocos2d::unz64_file_pos_s const*) */

int cocos2d::unzGoToFilePos64(void *param_1,unz64_file_pos_s *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((param_2 == (unz64_file_pos_s *)0x0) || (bVar3 = param_1 == (void *)0x0, bVar3)) {
    iVar1 = -0x66;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((int)param_1 + 0x58) = *(undefined4 *)param_2;
    *(undefined4 *)((int)param_1 + 0x5c) = uVar2;
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((int)param_1 + 0x50) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((int)param_1 + 0x54) = uVar2;
    iVar1 = FUN_0015e82c(param_1,(int)param_1 + 0x80,(int)param_1 + 0xd8,0,0,bVar3,bVar3,bVar3,bVar3
                        );
    *(uint *)((int)param_1 + 0x60) = (uint)(iVar1 == 0);
    *(undefined4 *)((int)param_1 + 100) = 0;
  }
  return iVar1;
}


