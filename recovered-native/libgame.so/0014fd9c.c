/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fd9c  Symbol: updateColor */

/* cocos2d::CCProgressTimer::updateColor() */

undefined8 __thiscall cocos2d::CCProgressTimer::updateColor(CCProgressTimer *this)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined local_1c;
  
  uVar2 = (**(code **)(**(int **)(this + 0x104) + 0xe8))();
  pcVar3 = (char *)(**(code **)(**(int **)(this + 0x104) + 0xf0))();
  cVar9 = *pcVar3;
  cVar8 = pcVar3[1];
  cVar7 = pcVar3[2];
  piVar4 = (int *)(**(code **)(**(int **)(this + 0x104) + 0x118))();
  iVar5 = (**(code **)(*piVar4 + 0x38))();
  if (iVar5 != 0) {
    cVar1 = __udivsi3(uVar2,0xff);
    cVar9 = cVar1 * cVar9;
    cVar8 = cVar1 * cVar8;
    cVar7 = cVar1 * cVar7;
  }
  iVar5 = 0;
  if (*(int *)(this + 0x10c) != 0) {
    for (; iVar5 < *(int *)(this + 0x108); iVar5 = iVar5 + 1) {
      local_1c = (undefined)uVar2;
      iVar6 = *(int *)(this + 0x10c) + iVar5 * 0x14;
      *(char *)(iVar6 + 8) = cVar9;
      *(char *)(iVar6 + 9) = cVar8;
      *(char *)(iVar6 + 10) = cVar7;
      *(undefined *)(iVar6 + 0xb) = local_1c;
    }
  }
  return CONCAT44(uVar2,this);
}


