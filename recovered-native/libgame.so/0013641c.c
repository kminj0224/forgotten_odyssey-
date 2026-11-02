/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013641c  Symbol: scheduleUpdateForTarget */

/* cocos2d::CCScheduler::scheduleUpdateForTarget(cocos2d::CCObject*, int, bool) */

void __thiscall
cocos2d::CCScheduler::scheduleUpdateForTarget
          (CCScheduler *this,CCObject *param_1,int param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  _listEntry **pp_Var3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  CCObject *local_1c [2];
  
  local_1c[0] = param_1;
  if (*(int *)(this + 0x24) != 0) {
    uVar2 = ((uint)param_1 & 0xff) + DAT_001364fc + ((uint)param_1 & 0xff000000) +
            ((uint)param_1 >> 0x10 & 0xff) * 0x10000 + ((uint)param_1 >> 8 & 0xff) * 0x100 ^
            DAT_00136500;
    uVar4 = DAT_00136504 - uVar2 ^ uVar2 << 8;
    uVar5 = (DAT_00136508 - uVar2) - uVar4 ^ uVar4 >> 0xd;
    uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar5 >> 0xc;
    uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 << 0x10;
    uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar4 >> 5;
    uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 << 10;
    piVar6 = *(int **)(*(int *)(this + 0x24) + 0xc);
    iVar7 = *(int *)(((uVar4 >> 0xf ^ (uVar5 - uVar2) - uVar4) & piVar6[1] - 1U) * 0xc + *piVar6);
    if (iVar7 != 0) {
      iVar7 = iVar7 - piVar6[5];
    }
    for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x1c) - piVar6[5]) {
      if ((*(int *)(iVar7 + 0x24) == 4) &&
         (iVar1 = memcmp(*(void **)(iVar7 + 0x20),local_1c,4), iVar1 == 0)) {
        *(undefined *)(*(int *)(iVar7 + 4) + 0x11) = 0;
        return;
      }
      if (*(int *)(iVar7 + 0x1c) == 0) break;
    }
  }
  if (param_2 == 0) {
    appendIn(this,(_listEntry **)(this + 0x1c),local_1c[0],param_3);
  }
  else {
    if (param_2 < 0) {
      pp_Var3 = (_listEntry **)(this + 0x18);
    }
    else {
      pp_Var3 = (_listEntry **)(this + 0x20);
    }
    priorityIn(this,pp_Var3,local_1c[0],param_2,param_3);
  }
  return;
}


