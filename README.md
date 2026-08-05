# evento-globolo-clients (superseded)

> This repository is frozen. The canonical source of truth is [`evgl-clients`](https://github.com/evento-globolo/evgl-clients).

The organization was bootstrapped with both short-name and full-name scaffolds. The short repository is the canonical implementation and package identity. This repository remains available only for history and provenance.

## Migrate

- Open issues, pull requests, releases, and new work in `evento-globolo/evgl-clients`.
- Change Zed dependencies to `"evento-globolo/evgl-clients" = "^0.1.0"`.
- Point any retained submodule at `evento-globolo/evgl-clients` and classify it according to the canonical monorepo's composition policy.
- Prefer Zed packages for dependencies and use:

  ```bash
  git submodule update --init --recursive
  zed install --git-submodules
  ```

Do not source the same repository through both Zed and a gitlink.

The root `.zpkg.toml` is removed by this consolidation so the long-name repository cannot continue as a competing Zed package identity. Its Git history remains intact; genuinely unique changes should be ported to the canonical repository in a reviewed PR before an organization administrator archives this repository.
