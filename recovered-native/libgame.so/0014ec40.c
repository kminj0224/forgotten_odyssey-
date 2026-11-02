/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ec40  Symbol: setString */

/* cocos2d::CCMenuItemLabel::setString(char const*) */

void cocos2d::CCMenuItemLabel::setString(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  code *pcVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x118);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)
             __dynamic_cast(puVar1,*(undefined4 *)(DAT_0014ec88 + 0x14ec5a),
                            *(undefined4 *)(DAT_0014ec8c + 0x14ec5c),0xfffffffe);
  }
  (**(code **)*puVar1)(puVar1,in_r1);
  pcVar3 = *(code **)(*(int *)param_1 + 0x80);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x118) + 0x7c))();
  (*pcVar3)(param_1,uVar2);
  return;
}


