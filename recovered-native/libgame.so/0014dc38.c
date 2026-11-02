/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014dc38  Symbol: alignItemsInColumns */

/* cocos2d::CCMenu::alignItemsInColumns(unsigned int, std::__va_list) */

void __thiscall cocos2d::CCMenu::alignItemsInColumns(CCMenu *this,uint param_1,__va_list param_2)

{
  uint **ppuVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 uVar14;
  int local_68;
  int *local_64;
  uint local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_3c [2];
  undefined4 local_34;
  CCPoint aCStack_2c [8];
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar9 = DAT_0014de78 + 0x14dc44;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_3c[0] = param_1;
  while (local_60 = local_3c[0], local_3c[0] != 0) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_24,local_3c);
    local_3c[0] = *(uint *)param_2;
    param_2 = (__va_list)(param_2 + 4);
  }
  if ((*(CCArray **)(this + 0x40) == (CCArray *)0x0) ||
     (iVar7 = CCArray::count(*(CCArray **)(this + 0x40)), iVar7 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(this + 0x40);
    if (uVar11 != 0) {
      ppuVar1 = (uint **)(uVar11 + 0x14);
      uVar11 = **ppuVar1;
      if (uVar11 != 0) {
        local_64 = (int *)(*ppuVar1)[2];
        piVar12 = local_64 + (uVar11 - 1);
        iVar7 = -5;
        uVar11 = 0;
        iVar4 = 0;
        while (local_64 <= piVar12) {
          iVar2 = *local_64;
          local_64 = local_64 + 1;
          if (iVar2 == 0) break;
          piVar3 = (int *)__dynamic_cast(iVar2,*(undefined4 *)(iVar9 + DAT_0014de7c),
                                         *(undefined4 *)(iVar9 + DAT_0014de80),0);
          if (piVar3 != (int *)0x0) {
            uVar13 = *(uint *)(local_60 * 4 + (int)local_24);
            iVar2 = (**(code **)(*piVar3 + 0x7c))();
            uVar5 = *(undefined4 *)(iVar2 + 4);
            uVar6 = __floatunsisf(iVar4);
            iVar4 = __aeabi_fcmpge(uVar6,uVar5);
            if ((iVar4 != 0) || (iVar4 = __unordsf2(uVar5,uVar5), iVar4 != 0)) {
              uVar5 = uVar6;
            }
            iVar2 = __fixunssfsi(uVar5);
            uVar11 = uVar11 + 1;
            iVar4 = iVar2;
            if (uVar13 <= uVar11) {
              iVar4 = 0;
              local_60 = local_60 + 1;
              iVar7 = iVar7 + 5 + iVar2;
              uVar11 = 0;
            }
          }
        }
        goto LAB_0014dd1e;
      }
    }
  }
  iVar7 = -5;
LAB_0014dd1e:
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar4 = CCArray::count(*(CCArray **)(this + 0x40)), iVar4 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar12 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar4 = *piVar12;
    if (iVar4 != 0) {
      local_50 = __floatsisf(iVar7 / 2);
      piVar12 = (int *)piVar12[2];
      piVar3 = piVar12 + iVar4 + -1;
      uVar13 = 0;
      local_60 = 0;
      local_54 = 0;
      local_68 = 0;
      local_58 = 0;
      while (piVar12 <= piVar3) {
        iVar7 = *piVar12;
        piVar12 = piVar12 + 1;
        if (iVar7 == 0) break;
        piVar8 = (int *)__dynamic_cast(iVar7,*(undefined4 *)(iVar9 + DAT_0014de7c),
                                       *(undefined4 *)(iVar9 + DAT_0014de80),0);
        if (piVar8 != (int *)0x0) {
          if (uVar13 == 0) {
            uVar13 = *(uint *)(local_58 * 4 + (int)local_24);
            uVar5 = __floatunsisf(uVar13 + 1);
            local_60 = __divsf3(local_34,uVar5);
            local_54 = local_60;
          }
          iVar7 = (**(code **)(*piVar8 + 0x7c))(piVar8);
          uVar6 = *(undefined4 *)(iVar7 + 4);
          uVar5 = __floatunsisf(local_68);
          iVar7 = __aeabi_fcmpge(uVar5,uVar6);
          if ((iVar7 == 0) && (iVar7 = __unordsf2(uVar6,uVar6), iVar7 == 0)) {
            uVar5 = uVar6;
          }
          local_68 = __fixunssfsi(uVar5);
          iVar7 = *piVar8;
          pcVar10 = *(code **)(iVar7 + 0x3c);
          uVar5 = __mulsf3(local_34,0x3f000000);
          __subsf3(local_60,uVar5);
          iVar7 = (**(code **)(iVar7 + 0x7c))(piVar8);
          uVar5 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
          uVar14 = __subsf3(local_50,uVar5);
          CCPoint::CCPoint(aCStack_2c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar10)(piVar8,aCStack_2c);
          local_60 = __addsf3(local_60,local_54);
          uVar11 = uVar11 + 1;
          if (uVar13 <= uVar11) {
            uVar13 = 0;
            uVar11 = 0;
            uVar5 = __floatunsisf(local_68 + 5);
            local_50 = __subsf3(local_50,uVar5);
            local_68 = 0;
            local_58 = local_58 + 1;
          }
        }
      }
    }
  }
  if (local_24 != (void *)0x0) {
    operator_delete(local_24);
  }
  return;
}


