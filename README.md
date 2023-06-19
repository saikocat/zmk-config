# ZMK-Config

## Woraround for user config area with multiple peripherals overlays

Temporary copy `nice_view_adapter` and `nice_view` folder from
`app/boards/shields` into user config area. So that the ordering of the include
is correct. This will be removed once figuring out how to maintain patches in
our `zmk-firmware` repo consistently

Links to discussion and issues:

- https://discord.com/channels/675924128108118016/991852441832259714/1029171036706586646
- https://github.com/zmkfirmware/zmk/issues/1488

## Windows Battery Reporting Fix

Zephyr 3.2 introduced a new Kconfig setting that can be used to work around a
bug in Windows related to battery reporting.

```
CONFIG_BT_GATT_ENFORCE_SUBSCRIPTION=n
```
