<?php  session_start(); ?>
<!DOCTYPE html>
<html lang="pt-BR">
	<head>
		<meta charset="utf-8">
		<title> Cadastro de Pet </title>
	</head>
	<body>
		<?php
			include "funcoes.inc";
			include "cabecalho.inc";
			include "menu.inc";

			if (empty($_POST)){

				include "form_pet.inc";

			}

			else{
				
				ler_dados_pet();
			}
		?>

	</body>
</html>