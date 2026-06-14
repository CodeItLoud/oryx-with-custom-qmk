# Agent Instructions for `6qR6q`

This folder contains the local QMK changes for the Oryx layout with ID
`6qR6q`. The repository workflow fetches fresh files from Oryx and merges them
with local changes, so keep edits small and easy to reconcile.

## Scope

- Make changes only inside this `6qR6q` folder unless the user explicitly asks
  otherwise.
- Read the top-level `README.md` before changing this folder. It explains the
  Oryx plus custom QMK workflow used by this repository.
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

## Files

- `keymap.c`: Put custom QMK behavior in clearly marked sections near related
  logic.
- `rules.mk`: Add custom feature flags below a `# Custom QMK here` marker.
- `config.h`: Keep custom defines grouped and commented if this file is edited.
- `keymap.json`: Avoid manual changes unless the user specifically asks for
  Oryx module metadata edits.
