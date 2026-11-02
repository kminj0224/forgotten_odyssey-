/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144d14  Symbol: setNextScene */

/* cocos2d::CCDirector::setNextScene() */

void cocos2d::CCDirector::setNextScene(void)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(in_r0 + 0x44);
  iVar3 = DAT_00144db0 + 0x144d20;
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    iVar1 = __dynamic_cast(piVar2,*(undefined4 *)(iVar3 + DAT_00144db4),
                           *(undefined4 *)(iVar3 + DAT_00144db8),0);
    piVar4 = (int *)(uint)(iVar1 != 0);
  }
  if ((*(int *)(in_r0 + 0x48) == 0) ||
     (iVar3 = __dynamic_cast(*(int *)(in_r0 + 0x48),*(undefined4 *)(iVar3 + DAT_00144db4),
                             *(undefined4 *)(iVar3 + DAT_00144db8),0), iVar3 == 0)) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xb8))(piVar2);
    }
    if ((*(char *)(in_r0 + 0x4c) != '\0') && (*(int **)(in_r0 + 0x44) != (int *)0x0)) {
      (**(code **)(**(int **)(in_r0 + 0x44) + 0xdc))();
    }
  }
  if (*(CCObject **)(in_r0 + 0x44) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(in_r0 + 0x44));
  }
  *(CCObject **)(in_r0 + 0x44) = *(CCObject **)(in_r0 + 0x48);
  CCObject::retain(*(CCObject **)(in_r0 + 0x48));
  *(undefined4 *)(in_r0 + 0x48) = 0;
  if ((piVar4 == (int *)0x0) && (*(int **)(in_r0 + 0x44) != (int *)0x0)) {
    (**(code **)(**(int **)(in_r0 + 0x44) + 0xb0))();
    (**(code **)(**(int **)(in_r0 + 0x44) + 0xb4))();
  }
  return;
}


