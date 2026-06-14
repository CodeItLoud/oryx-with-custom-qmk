# Agent Instructions

This repository combines Oryx-generated layout files with local QMK changes.
The workflow fetches fresh files from Oryx and merges them with local edits, so
keep changes small, clearly marked, and easy to reconcile.

## Scope

- Read `README.md` before making changes. It explains the Oryx plus custom QMK
  workflow used by this repository.
- By default, make changes only inside the `6qR6q` folder. Do not edit files in
  the repository root or other folders unless the user explicitly asks for that.
- Treat Oryx-generated content as likely to change on the next layout fetch.

## Merge-Friendly Custom QMK Changes

- Prefer adding custom logic in clearly separated blocks instead of modifying
  generated Oryx code inline.
- Surround local C changes with comments that match the existing style, for
  example:

```c
// Custom QMK starts
```

- In Makefiles, use the existing comment style:

```make
# Custom QMK here
```

- Leave blank lines around custom sections so future Oryx merges have more
  stable context.
- When a custom change must touch an Oryx-generated switch, function, or rule,
  keep the custom block compact and add a short comment explaining why it is
  local.

## `6qR6q` Files

- `6qR6q/keymap.c`: Put custom QMK behavior in clearly marked sections near
  related logic.
- `6qR6q/rules.mk`: Add custom feature flags below a `# Custom QMK here`
  marker.
- `6qR6q/config.h`: Keep custom defines grouped and commented if this file is
  edited.
- `6qR6q/keymap.json`: Avoid manual changes unless the user specifically asks
  for Oryx module metadata edits.
