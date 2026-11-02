/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e70c  Symbol: activate */

/* cocos2d::CCMenuItemToggle::activate() */

void cocos2d::CCMenuItemToggle::activate(void)

{
  int *in_r0;
  int iVar1;
  
  if (*(char *)((int)in_r0 + 0xfd) != '\0') {
    iVar1 = *in_r0;
    __aeabi_uidivmod(in_r0[0x46] + 1,
                     *(int *)(in_r0[0x47] + 0x18) - *(int *)(in_r0[0x47] + 0x14) >> 2);
    (**(code **)(iVar1 + 0x114))(in_r0);
  }
  CCMenuItem::activate();
  return;
}


