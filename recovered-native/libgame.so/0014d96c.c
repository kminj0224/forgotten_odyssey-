/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d96c  Symbol: alignItemsInRows */

/* cocos2d::CCMenu::alignItemsInRows(unsigned int, std::__va_list) */

void __thiscall cocos2d::CCMenu::alignItemsInRows(CCMenu *this,uint param_1,__va_list param_2)

{
  uint **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  void *local_7c;
  uint local_78;
  undefined4 local_74;
  int *local_6c;
  void *local_5c [2];
  void *local_54;
  uint local_50 [2];
  undefined4 local_48;
  CCPoint aCStack_44 [8];
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  
  iVar10 = DAT_0014dc0c + 0x14d97a;
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_5c[0] = (void *)param_1;
  while (local_7c = local_5c[0], local_5c[0] != (void *)0x0) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_3c,(uint *)local_5c);
    local_5c[0] = *(void **)param_2;
    param_2 = (__va_list)(param_2 + 4);
  }
  local_30 = local_5c[0];
  local_2c = local_5c[0];
  local_28 = local_5c[0];
  local_24 = local_5c[0];
  local_20 = local_5c[0];
  local_1c = local_5c[0];
  local_54 = local_5c[0];
  if ((*(CCArray **)(this + 0x40) == (CCArray *)0x0) ||
     (iVar7 = CCArray::count(*(CCArray **)(this + 0x40)), iVar7 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(this + 0x40);
    if (uVar12 != 0) {
      ppuVar1 = (uint **)(uVar12 + 0x14);
      uVar12 = **ppuVar1;
      if (uVar12 != 0) {
        local_6c = (int *)(*ppuVar1)[2];
        piVar11 = local_6c + (uVar12 - 1);
        local_78 = 0xfffffffb;
        iVar7 = -10;
        uVar12 = 0;
        while (local_6c <= piVar11) {
          iVar3 = *local_6c;
          local_6c = local_6c + 1;
          if (iVar3 == 0) break;
          piVar2 = (int *)__dynamic_cast(iVar3,*(undefined4 *)(iVar10 + DAT_0014dc14),
                                         *(undefined4 *)(iVar10 + DAT_0014dc18),0);
          if (piVar2 != (int *)0x0) {
            uVar13 = *(uint *)((int)local_7c * 4 + (int)local_3c);
            puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
            uVar6 = *puVar4;
            uVar5 = __floatunsisf(local_54);
            iVar3 = __aeabi_fcmpge(uVar5,uVar6);
            if ((iVar3 != 0) || (iVar3 = __unordsf2(uVar6,uVar6), iVar3 != 0)) {
              uVar6 = uVar5;
            }
            local_54 = (void *)__fixunssfsi(uVar6);
            uVar12 = uVar12 + 1;
            iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2);
            __addsf3(*(undefined4 *)(iVar3 + 4),DAT_0014dc10);
            iVar3 = __fixsfsi();
            local_78 = local_78 + iVar3;
            if (uVar13 <= uVar12) {
              std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_30,
                         (uint *)&local_54);
              local_50[0] = local_78;
              std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_24,local_50);
              iVar7 = (int)local_54 + iVar7 + 10;
              local_7c = (void *)((int)local_7c + 1);
              local_54 = (void *)0x0;
              uVar12 = 0;
              local_78 = 0xfffffffb;
            }
          }
        }
        goto LAB_0014da9c;
      }
    }
  }
  iVar7 = -10;
LAB_0014da9c:
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  local_54 = (void *)0x0;
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar3 = CCArray::count(*(CCArray **)(this + 0x40)), iVar3 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar11 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar3 = *piVar11;
    if (iVar3 != 0) {
      local_6c = (int *)__floatsisf(-(iVar7 / 2));
      piVar11 = (int *)piVar11[2];
      piVar2 = piVar11 + iVar3 + -1;
      uVar13 = 0;
      local_74 = 0;
      local_78 = 0;
      while (piVar11 <= piVar2) {
        iVar7 = *piVar11;
        piVar11 = piVar11 + 1;
        if (iVar7 == 0) break;
        piVar8 = (int *)__dynamic_cast(iVar7,*(undefined4 *)(iVar10 + DAT_0014dc14),
                                       *(undefined4 *)(iVar10 + DAT_0014dc18),0);
        if (piVar8 != (int *)0x0) {
          if (uVar13 == 0) {
            uVar13 = *(uint *)((int)local_3c + local_78 * 4);
            local_74 = __floatunsisf(*(undefined4 *)((int)local_24 + local_78 * 4));
          }
          puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x7c))(piVar8);
          uVar5 = *puVar4;
          uVar6 = __floatunsisf(local_54);
          iVar7 = __aeabi_fcmpge(uVar6,uVar5);
          if ((iVar7 == 0) && (iVar7 = __unordsf2(uVar5,uVar5), iVar7 == 0)) {
            uVar6 = uVar5;
          }
          local_54 = (void *)__fixunssfsi(uVar6);
          uVar12 = uVar12 + 1;
          pcVar9 = *(code **)(*piVar8 + 0x3c);
          uVar6 = __floatunsisf(*(uint *)(local_78 * 4 + (int)local_30) >> 1);
          __addsf3(local_6c,uVar6);
          uVar6 = __mulsf3(local_48,0x3f000000);
          uVar14 = __subsf3(local_74,uVar6);
          CCPoint::CCPoint(aCStack_44,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar9)(piVar8,aCStack_44);
          iVar7 = (**(code **)(*piVar8 + 0x7c))(piVar8);
          uVar6 = __addsf3(*(undefined4 *)(iVar7 + 4),DAT_0014dc1c);
          local_74 = __subsf3(local_74,uVar6);
          if (uVar13 <= uVar12) {
            uVar13 = 0;
            uVar12 = 0;
            uVar6 = __floatunsisf((int)local_54 + 5);
            local_6c = (int *)__addsf3(local_6c,uVar6);
            local_54 = (void *)0x0;
            local_78 = local_78 + 1;
          }
        }
      }
    }
  }
  if (local_24 != (void *)0x0) {
    operator_delete(local_24);
  }
  if (local_30 != (void *)0x0) {
    operator_delete(local_30);
  }
  if (local_3c != (void *)0x0) {
    operator_delete(local_3c);
  }
  return;
}


